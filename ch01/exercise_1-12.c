#include <stdio.h>

//define constants
#define OUT 0
#define IN 1

//prints output one word at a time
int main() {
    int c, state;

    while ((c = getchar()) != EOF) {
        if (c == '\n' || c == ' ' || c == '\t') {
            state = OUT;
        } else if (state == OUT) {
            putchar('\n');
            state = IN;
        }

        putchar(c);
    }

    return 0;
}