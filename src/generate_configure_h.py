"""
Generate a C/C++ header from a CMake .in template for use with qmake builds.

CMake processes .h.in files at configure time, replacing:
    #cmakedefine VAR  ->  #define VAR      (when VAR is ON/defined)
                                        ->  /* #undef VAR */ (when VAR is OFF/undefined)

qmake builds should not force CMake option defaults, so this script converts
#cmakedefine lines into commented undef lines.
"""

import re
import sys


def main():
    if len(sys.argv) != 3:
        print(
            f"Usage: {sys.argv[0]} <input.h.in> <output.h>",
            file=sys.stderr,
        )
        sys.exit(1)

    in_path, out_path = sys.argv[1], sys.argv[2]

    with open(in_path) as f:
        content = f.read()

    # #cmakedefine VAR [rest] -> /* #undef VAR */
    content = re.sub(
        r"^#cmakedefine\s+([A-Za-z_][A-Za-z0-9_]*)\s*$",
        r"/* #undef \1 */",
        content,
        flags=re.MULTILINE,
    )

    # #cmakedefine VAR REST -> /* #undef VAR */ /* REST */
    content = re.sub(
        r"^#cmakedefine\s+([A-Za-z_][A-Za-z0-9_]*)\s+(.+)$",
        r"/* #undef \1 */ /* \2 */",
        content,
        flags=re.MULTILINE,
    )

    with open(out_path, "w") as f:
        f.write(content)


if __name__ == "__main__":
    main()
