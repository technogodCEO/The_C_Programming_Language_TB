#include <stdio.h>
#include <stdint.h>

/* print Fahrenheit-Celsius table
 for fahr = 0, 20, ..., 300 */


int main() {
    float fahr, celsius; 
    float lower, upper, step;

    lower = 0; // lower limit of temperature scale 
    upper = 300; // upper limit of tempeature scale
    step = 20; // step size

    //print heading
    printf("%s\n\n", "Celsius to Fahrenheit Table");

    //main loop
    celsius = lower;
    while (celsius <= upper) {
        fahr = (celsius * (9.0/5.0))+32.0;
        printf("%3.0f\t%6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }

    return 0; 
}

