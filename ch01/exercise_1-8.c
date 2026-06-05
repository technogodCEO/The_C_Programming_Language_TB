#include <stdio.h>

int main() {
    int blanks = 0, tabs = 0, newlines = 0;
    char c; //character holder variable

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            blanks++;
        } else if (c == '\t') {
            tabs++;
        } else if (c == '\n') {
            newlines++; 
        }
    }

    printf("Blanks: %d\tTabs: %d\t\tNewlines: %d\n", blanks, tabs, newlines);
    return 0;
}