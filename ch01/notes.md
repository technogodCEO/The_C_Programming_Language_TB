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

## 1.2 Variables and Arithmetic Expressions

```c
#include <stdio.h>

/* print Fahrenheit-Celsius table
 for fahr = 0, 20, ..., 300 */

int main() {
    int fahr, celcius; 
    int lower, upper, step;

    lower = 0; // lower limit of temperature scale 
    upper = 300; // upper limit of tempeature scale
    step = 20; // step size

    fahr = lower;
    while (fahr <= upper) {
        celcius = 5 * (fahr-32) / 9;
        printf("%d\t%d\n", fahr, celcius);
        fahr = fahr + step;
    }
}
```

This function converts a series of fahrenheit temperatures, from 0 to 300 in intervals of 20, to celsius using a while loop, i'd use a for loop but the creator of C can do what he wants ig. The actual textbook
uses just main() without an int, declaring an implicit int, which ANSI C allowed, but modern C does not, 
thus I have included that implicit int explicitly in this version.

### Comments

like any other c-based language: \
// for line comments  \
/* */ for a block \
Note: the original ANSI C this book was written for does note support // comments like modern c does. \
Again, like any other language, the C compiler ignores anything in comments, so its just to make the code
easier to read for the humans programming it.

### Varibles and Basic Primative Types

unlike a few languages, everything must be declared before it's used
