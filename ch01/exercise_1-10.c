#include <stdio.h>

int main() {
    char c; //character holder variable

    while ((c = getchar()) != EOF) {
        if (c == '\b') {
            printf("%s", "\\b");
        } else if (c == '\t') {
            printf("%s", "\\t");
        } else if (c == '\\') {
            printf("%s", "\\\\");
        } else {
            putchar(c); 
        }
    }

    return 0;
}