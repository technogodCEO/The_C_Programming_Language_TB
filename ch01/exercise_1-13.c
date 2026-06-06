#include <stdio.h>

#define OUT 0
#define IN 1

#define WORDLENGTHMAX 15

int main() {
    int currentWordLength = 0, state = OUT, c;
    int wordLengths[WORDLENGTHMAX] = {0};

    //count input words
    while ((c = getchar()) != EOF) {
        if (c == '\n' || c == ' ' || c == '\t') {
            if (state == IN) {
                wordLengths[currentWordLength - 1]++;
                currentWordLength = 0;
            }
            state = OUT;
        } else if (state == OUT) {
            state = IN;
            currentWordLength++;
        } else {
            currentWordLength++;
        }
    }

    // check to make sure last word was accounted for (With the current code it won't be if it ended on a non-whitespace character)
    if (state == IN) {
        wordLengths[currentWordLength - 1]++;
    }

    //print horizontal histogram
    printf("\t\t%s\n\n", "Horizontal Histogram Chart");
    for (int i = 0; i < WORDLENGTHMAX; i++) {
        printf("%d letters: \t|", i + 1);
        for (int j = 1; j <= wordLengths[i]; j++) {
            putchar('#');
        }
        putchar('\n');
    }

    //print vertical histogram
    printf("\n\t\t%s\n\n", "Vertical Histogram Chart");

    //find max
    int max = 0;
    for (int i = 0; i < WORDLENGTHMAX; i++) {
        if (wordLengths[i] > max) {
            max = wordLengths[i];
        }
    }

    for (int i = max; i > 0; i--) {
        for (int j = 0; j < WORDLENGTHMAX; j++) {
            if (wordLengths[j] >= i) {
                putchar('#');
            } else {
                putchar(' ');
            }
        }
        putchar('\n');
    }

    printf("%s\n%s\n\t%s", "---------------", "1             15", "# of Letters");
}