# Chapter 01

## 1.1 Getting Started

### Printing Hello World

like any other language the first step is always to print hello world -> in c, we print hello world like this:

```c
#include <stdio.h>

int main() {
    printf("Hello World!\n");
}
```
C programs often pull functions from other libraries. The printf function is an example of this.
This function is pulled from the "stdio.h" header file for the stdio library.
The first line of the program with the command #include imports this library into program
-> equivalent of import in python or java.

\n is the newline escape character, like in most other languages

### Importance of main()

C always starts execution at main(), so, every c program must have one

### Basic Escape Charecters (aka. Escape Sequences)

\\\\ -> backslash itself \
\b -> backspace \
\n -> newline \
\t -> tab \
\\" -> double quotes mark (so it doesn't get read as a string start/end)
