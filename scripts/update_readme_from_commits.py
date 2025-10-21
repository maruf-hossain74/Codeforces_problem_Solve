#!/usr/bin/env python3
"""
Update README.md problem table by searching each file's git commit history
for a commit subject like:
  contest: Educational Codeforces Round 162 (Rated for Div. 2)_1100_Rating

Fallback for rating: use parent folder name if it starts with "Rating_".

Writes between markers:
<!--START_SECTION:problems-->
<!--END_SECTION:problems-->
"""

import subprocess
import re
import datetime
from pathlib import Path
import sys

ROOT = Path(__file__).resolve().parents[1]
README = ROOT / "README.md"
EXCLUDE_DIRS = {".github", "scripts", ".git"}
EXT_LANG = {
    ".cpp": "C++", ".cc":"C++", ".c":"C", ".py":"Python", ".java":"Java",
    ".js":"JavaScript", ".ts":"TypeScript", ".cs":"C#", ".go":"Go",
    ".rs":"Rust", ".kt":"Kotlin", ".php":"PHP", ".rb":"Ruby"
}

# Pattern to parse commit subjects like:
# contest: Codeforces Round 503 (by SIS, Div. 2)_1000_Rating
COMMIT_PATTERN = re.compile(r'contest:\s*(.+?)_?(\d{3,4})?_?Rating', re.IGNORECASE)
# fallback rating pattern in commit subject (e.g., "... 1100 Rating")
RATING_IN_SUBJ = re.compile(r'(\d{3,4})\s*[_-]?\s*Rating', re.IGNORECASE)
# folder pattern like Rating_1000-1100
FOLDER_RATING = re.compile(r'Rating[_\- ]?(\d{3,4})(?:[_\- ]?-\s?(\d{3,4}))?', re.IGNORECASE)

def run(cmd, cwd=ROOT):
    res = subprocess.run(cmd, cwd=cwd, stdout=subprocess.PIPE, stderr=subprocess.PIPE, text=True)
    if res.returncode != 0:
        raise RuntimeError(f"Command {cmd!r} failed: {res.stderr.strip()}")
    return res.stdout

def list_files():
    out = run(["git", "ls-files"])
    files = [Path(line) for line in out.splitlines() if line]
    filtered = []
    for p in files:
        if any(part in EXCLUDE_DIRS for part in p.parts):
            continue
        if p.name == "README.md":
            continue
        if p.suffix.lower() not in EXT_LANG:
            continue
        filtered.append(p)
    return filtered

def commit_subjects_for(path: Path):
    # returns list of commit subjects (newest -> oldest) for the file, following renames
    try:
        out = run(["git", "log", "--follow", "--pretty=format:%s", "--", str(path)])
        lines = [l for l in out.splitlines() if l.strip()]
        return lines
    except RuntimeError:
        return []

def parse_subjects_for_metadata(subjects):
    # subjects: list of commit subjects newest->oldest
    for s in subjects:
        m = COMMIT_PATTERN.search(s)
        if m:
            contest = m.group(1).strip()
            rating = m.group(2) if m.group(2) else ""
            return contest, rating
        # fallback rating
        m2 = RATING_IN_SUBJ.search(s)
        if m2:
            return "", m2.group(1)
    return None, None

def rating_from_parent_folder(path: Path):
    # try to read rating info from parent folder name
    parent = path.parent.name
    m = FOLDER_RATING.search(parent)
    if m:
        if m.group(2):
            return f"{m.group(1)}-{m.group(2)}"
        return m.group(1)
    # try grandparent (in case nested)
    gp = path.parents[1].name if len(path.parents) > 1 else ""
    m2 = FOLDER_RATING.search(gp)
    if m2:
        if m2.group(2):
            return f"{m2.group(1)}-{m2.group(2)}"
        return m2.group(1)
    return ""

def build_table(rows):
    if not rows:
        return "_No solution files found._"
    header = "| # | File | Language | Contest | Rating |\n|---:|---|---|---|---|\n"
    lines = []
    for i, r in enumerate(sorted(rows, key=lambda x: x["file"].as_posix().lower()), start=1):
        file_rel = r["file"].as_posix()
        file_md = f"[`{r['name']}`]({file_rel})"
        contest_md = r["contest"] or ""
        rating_md = r["rating"] or ""
        lines.append(f"| {i} | {file_md} | {r['lang']} | {contest_md} | {rating_md} |")
    return header + "\n".join(lines)

def update_readme_section(new_md):
    if not README.exists():
        print("README.md not found at", README)
        return False
    text = README.read_text(encoding="utf-8")
    start_marker = "<!--START_SECTION:problems-->"
    end_marker = "<!--END_SECTION:problems-->"
    if start_marker not in text or end_marker not in text:
        print("Markers not found in README.md; please add them.")
        return False
    before, rest = text.split(start_marker, 1)
    _, after = rest.split(end_marker, 1)
    timestamp = datetime.datetime.utcnow().strftime("%Y-%m-%d %H:%M UTC")
    replacement = f"{start_marker}\n\n{new_md}\n\n_Last updated: {timestamp}_\n\n{end_marker}"
    new_text = before + replacement + after
    if new_text == text:
        print("No changes to README.md")
        return False
    README.write_text(new_text, encoding="utf-8")
    print("README.md updated")
    return True

def main():
    files = list_files()
    print(f"Found {len(files)} solution files (scanning git history)...")
    rows = []
    for p in files:
        try:
            subs = commit_subjects_for(p)
        except Exception as e:
            print(f"Warning: git log failed for {p}: {e}")
            subs = []
        contest, rating = parse_subjects_for_metadata(subs)
        if contest is None and rating is None:
            # nothing found in history; fallback to folder
            contest = ""
            rating = rating_from_parent_folder(p) or ""
        # another fallback: if rating still empty, try searching subjects for any 3-4 digit number
        if not rating and subs:
            for s in subs:
                m = re.search(r'(\d{3,4})', s)
                if m:
                    rating = m.group(1)
                    break
        lang = EXT_LANG.get(p.suffix.lower(), p.suffix.lower().lstrip("."))
        rows.append({"file": p, "name": p.name, "lang": lang, "contest": contest, "rating": rating})
    table_md = build_table(rows)
    changed = update_readme_section(table_md)
    return 0 if changed else 0

if __name__ == "__main__":
    sys.exit(main())
