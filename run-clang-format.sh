#!/bin/bash
set -xeuo pipefail
which -a clang-format-20 > /dev/null \
	||  (echo -e "20.0.0\n$(clang-format${1+-$1} --version | grep -Eo '([0-9]+\.[0-9]+\.[0-9]+)')" | sort -CV ) \
		|| { echo "use '${0} <clang-format-version-not-less-than-20>' to call exact proper version" ; exit 1 ; }

IGNORED_DIRS=(
    "./generated_cpp_50"
    "./generated_cpp_511"
    "./generated_cpp_515"
    "./generated_cpp_53"
    "./generated_cpp_54"
    "./generated_cpp_56"
    "./examples"
    "./build"
)

IGNORE_CMD=""

for DIR in "${IGNORED_DIRS[@]}"; do
    IGNORE_CMD+=" -path $DIR -o"
done

IGNORE_CMD=${IGNORE_CMD% -o}

find . \( $IGNORE_CMD \) -prune -o -name '*.cpp' -print0 -o -name '*.h' -print0 | xargs -0 clang-format-20 --style=file -i
