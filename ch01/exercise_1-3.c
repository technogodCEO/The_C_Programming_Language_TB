#include <stdio.h>
#include <stdint.h>

/* print Fahrenheit-Celsius table
 for fahr = 0, 20, ..., 300 */


int main() {
    int fahr, celcius; 
    int lower, upper, step;

    lower = 0; // lower limit of temperature scale 
    upper = 300; // upper limit of tempeature scale
    step = 20; // step size

    //print heading
    printf("%s\n\n", "Fahrenheit to Celsius Table");

    //main loop
    fahr = lower;
    while (fahr <= upper) {
        celcius = 5 * (fahr-32) / 9;
        printf("%d\t%d\n", fahr, celcius);
        fahr = fahr + step;
    }

    return 0;
}

