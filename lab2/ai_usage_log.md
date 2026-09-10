# AI Usage Log

**Platform:** Perplexity  
**Model:** Perplexity

---

## Interaction 1

### User

what is a makefile

### Assistant Summary

Explained that a Makefile is a plain-text build-automation file used by the `make` utility. Described targets, prerequisites, recipes, dependency tracking, and common uses such as compiling C/C++ programs, testing, and cleaning generated files. Provided a small C-oriented example.

---

## Interaction 2

### User

what file type is a makefile file saved as

### Assistant Summary

Explained that the usual filename is `Makefile` with no file extension, and noted that GNU Make can also recognize `GNUmakefile` and `makefile`. Described using `-f` for a differently named Makefile.

---

## Interaction 3

### User

can there be more then one makefile in one folder

### Assistant Summary

Explained that a folder can contain multiple Makefile-style files, but `make` automatically selects one default-named file. Described choosing a specific file with `make -f filename`, including files with `include`, and keeping one primary `Makefile` for small projects.

---

## Interaction 4

### User

how to run a makefile from the terminal

### Assistant Summary

Explained how to navigate to the folder containing a Makefile and run `make`, how to invoke a named target with `make target-name`, and how to use `-f` for a nonstandard Makefile name. Included installation checks and common troubleshooting for missing Makefiles or missing `make`.

---

## Interaction 5

### User

give me an example file, what to run in the terminal and what should happen

### Assistant Summary

Created a small Makefile with `hello` and `goodbye` targets that print messages. Explained commands such as `make hello` and `make goodbye`, the expected terminal output, and that command recipe lines must begin with a tab.

---

## Interaction 6

### User

reate a Makefile:
Create a new file named isOdd.c that defines a function, isOdd, to determine whether a number is odd. Integrate this function into the main file.
Write a Makefile that compiles a simple program using multiple source files.
Include rules for cleaning up compiled files (e.g., make clean).
Run and Test the Script and Makefile:
Execute your shell script and Makefile to verify they work correctly.
Modify the script or Makefile to handle errors and improve functionality.

give me a step by step guide on how to do this

### Assistant Summary

Provided a step-by-step multi-file C project setup using `main.c`, `isOdd.c`, `isOdd.h`, and a Makefile. Suggested C code for checking odd integers and input errors, Makefile rules to compile and link object files, `run` and `clean` targets, terminal commands for building and testing, and an optional Bash test script that checks for build failures and validates odd/even test output.

---

## Interaction 7

### User

<q>make</q> k181m580@engr1005c-17:~/eecs348/lab2$ make
gcc -Wall -Wextra -Werror -std=c11 -c main.c -o main.o
gcc -Wall -Wextra -Werror -std=c11 -o odd_checker main.o isOdd.o
/usr/bin/ld: main.o: in function `main':
main.c:(.text+0x50): undefined reference to `isOdd'
collect2: error: ld returned 1 exit status
make: *** [Makefile:11: odd_checker] Error 1

### Assistant Summary

Identified the message as a link-time error: `main.c` calls `isOdd`, but the linker could not locate a matching compiled definition. Suggested verifying the source, header, function name, and Makefile object-file rule; provided a corrected Makefile structure; and recommended cleaning, rebuilding, and using `nm` to check whether `isOdd.o` defines the `isOdd` symbol.

---

## Interaction 8

### User

ok these are the three files that i got from the lab instructor and these are how to make the files but instead of even i just switched everything to odd

### Assistant Summary

Reviewed the attached instructor files and noted that the visible C source content appeared incomplete or malformed, including incomplete include directives, missing function braces, and an empty header-file result. Explained consistent renaming from `isEven` to `isOdd`, suggested completed versions of `main.c`, `isOdd.c`, `isOdd.h`, and a Makefile, and described commands to clean, build, and test the program.

---

## Interaction 9

### User

AI_USAGE_LOG_INSTRUCTIONS.md

### Assistant Summary

Read the attached AI usage-log instructions and generated this Markdown log covering the conversation history available in the chat.
