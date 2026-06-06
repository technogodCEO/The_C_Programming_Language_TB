#include <stdio.h>

#define ENDCHAR EOF
#define FIRSTCHAR 32
#define LASTCHAR 126

/*
Tracks the amount of occurrences of each printable ASCII character in 
source material, and then presents it in a horizontal histogram chart
*/

int main() {
    int c;
    int characters[LASTCHAR - FIRSTCHAR + 1] = {0};

    //count input charecters
    while ((c = getchar()) != ENDCHAR) {
        if (c <= 126 && c >= 32) {
            characters[c-32]++;
        }
    }

    //print horizontal histogram
    printf("\t\t%s\n\n", "Horizontal Histogram Chart");
    for (int i = 0; i <= LASTCHAR - FIRSTCHAR; i++) {
        printf("%c |", i + 32);
        for (int j = 1; j <= characters[i]; j++) {
            putchar('#');
        }
        putchar('\n');
    }
    return 0; 
}