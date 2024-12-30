// Modify the temperature conversion program to print a heading above the table. Check the sample output for the required format of the heading.

#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    int lower, upper, step;

    lower = 0;    // lower limit of temperature table
    upper = 300;  // upper limit
    step = 40;    // step size

    printf("FAHR   CELSIUS\n");
    printf("===============\n");

    fahrenheit = lower;
    while (fahrenheit <= upper) {
        celsius = (5.0 / 9.0) * (fahrenheit - 32);
        printf("%4.0f %6.1f\n", fahrenheit, celsius);
        fahrenheit = fahrenheit + step;
    }

    return 0;
}