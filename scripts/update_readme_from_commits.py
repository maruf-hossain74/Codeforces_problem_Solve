#!/usr/bin/env python3
"""
Update README.md problem table by reading each file's latest git commit message
and extracting contest + rating info from the commit subject.

Example commit subject that will be parsed:
  contest: Educational Codeforces Round 162 (Rated for Div. 2)_1100_Rating
"""

import subprocess
import re
import datetime
from pathlib import Path
import sys

ROOT = Path(__file__).resolve().parents[1]
README = ROOT / "README.md"
EXCLUDE_DIRS = {".github", "scripts"}
EXT_LANG = {
    ".cpp": "C++", ".cc":"C++", ".c":"C", ".py":"Python", ".java":"Java",
    ".js":"JavaScript", ".ts":"TypeScript", ".cs":"C#", ".go":"Go",
    ".rs":"Rust", ".kt":"Kotlin", ".php":"PHP", ".rb":"Ruby"
}

# Try to parse commit subjects like:
# "contest: Educational Codeforces Round 162 (Rated for Div. 2)_1100_Rating"
# This regex captures:
#  - contest name in group 1
#  - rating in group 2 (3 or 4 digits) if present
COMMIT_PATTERN = re.compile(r'contest:\s*(.+?)_?(\d{3,4})?_?Rating', re.IGNORECASE)

def run(cmd, cwd=ROOT):
    res = subprocess.run(cmd, cwd=cwd, stdout=subprocess.PIPE, stderr=subprocess.PIPE, text=True)
    if res.returncode != 0:
        raise RuntimeError(f"Command {cmd!r} failed: {res.stderr.strip()}")
    return res.stdout.strip()

def list_files():
    # get all tracked files
    out = run(["git", "ls-files"])
    files = [Path(line) for line in out.splitlines() if line]
    # filter out files in EXCLUDE_DIRS and README itself
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

def last_commit_subject_for(path: Path):
    # git log -1 --pretty=format:%s -- path
    try:
        subj = run(["git", "log", "-1", "--pretty=format:%s", "--", str(path)])
        return subj
    except RuntimeError:
        return ""

def parse_commit_subject(subj: str):
    if not subj:
        return None, None
    m = COMMIT_PATTERN.search(subj)
    if m:
        contest = m.group(1).strip()
        rating = m.group(2) if m.group(2) else ""
        return contest, rating
    # fallback: try to find a 3-4 digit rating anywhere
    m2 = re.search(r'(\d{3,4})\s*[_-]?\s*Rating', subj, re.IGNORECASE)
    if m2:
        return "", m2.group(1)
    return None, None

def build_table(rows):
    # rows: list of dicts {file, name, lang, contest, rating}
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
        subj = last_commit_subject_for(p)
        contest, rating = parse_commit_subject(subj)
        # If parse returned (None, None) -> no meaningful data
        # If it returned ("", rating) -> contest not found but rating found
        if contest is None and rating is None:
            # keep them empty so user can see which files lack proper commit or pattern
            contest = ""
            rating = ""
        lang = EXT_LANG.get(p.suffix.lower(), p.suffix.lower().lstrip("."))
        rows.append({"file": p, "name": p.name, "lang": lang, "contest": contest, "rating": rating})
    table_md = build_table(rows)
    changed = update_readme_section(table_md)
    return 0 if changed else 0

if __name__ == "__main__":
    sys.exit(main())
