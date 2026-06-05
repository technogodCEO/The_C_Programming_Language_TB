#include <stdio.h>

int main() {
    int c;
    c = getchar() != EOF;
    printf("%d\n", c);
    return 0;
}

/* works, returns 0 on EOF and 1 in any other case */