#!/usr/bin/env python3
import sys
from pathlib import Path

def main():
    if len(sys.argv) < 2:
        print("Usage: clean_files.py <file1> <file2> ...")
        return

    for file in sys.argv[1:]:
        p = Path(file)

        try:
            if p.exists():
                p.unlink()
                print(f"Deleted: {p}")
            else:
                print(f"Not found (skipped): {p}")
        except Exception as e:
            print(f"Error deleting {p}: {e}")

if __name__ == "__main__":
    main()
