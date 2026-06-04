#include <stdio.h>

int main() {
    int upper = 300;
    int lower = 0;
    int step = 20;

    for (int i /*i = Fahrenheit value */ = upper; i >= lower; i -= step) {
        printf("%6d\t%6.2d\n", i, 5 * (i-32) / 9);
    }

    return 0; 
}