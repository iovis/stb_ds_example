cc_flags := "-std=c17 -Wall -fsanitize=address" # -Wextra -Wpedantic
libs := ""

alias dev := default

default: run

run: build
    ./target/main

build: init
    bear -- cc {{cc_flags}} {{libs}} -g src/*.c -o target/main

release: init
    cc {{cc_flags}} {{libs}} -O3 src/*.c -o target/main

init:
    mkdir -p target/

clean:
    rm -rf target/
