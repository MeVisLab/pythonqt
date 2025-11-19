#!/bin/bash
set -xeuo pipefail
which -a clang-format-20 > /dev/null \
	||  (echo -e "20.0.0\n$(clang-format${1+-$1} --version | grep -Eo '([0-9]+\.[0-9]+\.[0-9]+)')" | sort -CV ) \
		|| { echo "use '${0} <clang-format-version-not-less-than-20>' to call exact proper version" ; exit 1 ; }

find . -prune -o -name '*.cpp' -print0 -o -name '*.h' -print0 | xargs -0 clang-format-20 --style=file -i
