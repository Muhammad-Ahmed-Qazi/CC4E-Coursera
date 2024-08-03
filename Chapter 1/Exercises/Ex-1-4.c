#include <stdio.h>
#include <stdlib.h>

int main () {
    int lower, upper, step;
    float fahr, celsius;
    
    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;

    // Program heading
    printf("Temperature conversion: C to F\n");

    while (celsius <= upper) {
        fahr = (celsius / (5.0/9.0)) + 32.0;
        printf("%4.0f %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
    
    return 0;
}