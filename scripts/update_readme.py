#!/usr/bin/env python3
"""
Scans the repository for solution files and updates README.md
between the markers:
<!--START_SECTION:problems-->
<!--END_SECTION:problems-->
"""

import os
import re
import datetime
from pathlib import Path

# Config
ROOT = Path(__file__).resolve().parents[1]   # repo root
README = ROOT / "README.md"
EXCLUDE_DIRS = {".git", ".github", "scripts", "__pycache__"}
EXT_LANG = {
    ".cpp": "C++",
    ".cc": "C++",
    ".c": "C",
    ".py": "Python",
    ".java": "Java",
    ".js": "JavaScript",
    ".ts": "TypeScript",
    ".cs": "C#",
    ".go": "Go",
    ".rs": "Rust",
    ".kt": "Kotlin",
    ".php": "PHP",
    ".rb": "Ruby"
}

# pattern to guess Codeforces problem link from filename like "1368A.cpp" or "1368_A.cpp" or "1368-A.cpp"
CF_PATTERN = re.compile(r'(?<!\d)(\d{3,7})[_\- ]?([A-Za-z]\d?|[A-Za-z])', re.IGNORECASE)

def find_solution_files():
    files = []
    for root, dirs, filenames in os.walk(ROOT):
        # prune excluded dirs
        dirs[:] = [d for d in dirs if d not in EXCLUDE_DIRS]
        for f in filenames:
            p = Path(root) / f
            if p.suffix.lower() in EXT_LANG:
                rel = p.relative_to(ROOT)
                files.append(rel.as_posix())
    return files

def guess_cf_link(filename):
    name = Path(filename).stem
    m = CF_PATTERN.search(name)
    if not m:
        return None
    contest = m.group(1)
    index = m.group(2).upper()
    # Codeforces problemset path uses single-letter indexes (A, B, C) or A/B etc
    # if index is like 'A' or 'A1' this may not match real problem — but it's best-effort.
    return f"https://codeforces.com/problemset/problem/{contest}/{index}"

def build_table(files):
    rows = []
    for f in sorted(files, key=lambda s: s.lower()):
        ext = Path(f).suffix.lower()
        lang = EXT_LANG.get(ext, ext.lstrip('.'))
        cf = guess_cf_link(f)
        cf_md = f"[problem]({cf})" if cf else ""
        file_md = f"[`{Path(f).name}`]({f})"
        rows.append((f, file_md, lang, cf_md))
    # create markdown table
    header = "| # | File | Language | Codeforces |\n|---:|---|---|---|\n"
    lines = []
    for i, (_, file_md, lang, cf_md) in enumerate(rows, start=1):
        lines.append(f"| {i} | {file_md} | {lang} | {cf_md} |")
    return header + "\n".join(lines) if lines else "_No solution files found yet._"

def update_readme_section(new_md):
    if not README.exists():
        print("README.md not found at:", README)
        return False
    text = README.read_text(encoding="utf-8")
    start_marker = "<!--START_SECTION:problems-->"
    end_marker = "<!--END_SECTION:problems-->"
    if start_marker not in text or end_marker not in text:
        print("Markers not found in README.md. Please add markers.")
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
    files = find_solution_files()
    table_md = build_table(files)
    changed = update_readme_section(table_md)
    if changed:
        # exit code 0 indicates change happened — but the action will perform git commit/push
        return 0
    return 0

if __name__ == "__main__":
    raise SystemExit(main())
