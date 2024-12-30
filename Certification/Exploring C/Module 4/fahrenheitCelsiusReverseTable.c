// Write a program to print the corresponding Celsius to Fahrenheit table. Check the sample output for the required format of the heading.

#include <stdio.h>

int main() {
    float celsius;
    int fahrenheit;

    for (fahrenheit = 300; fahrenheit >= 0; fahrenheit -= 20) {
        celsius = (5.0 / 9.0) * (fahrenheit - 32);
        printf("%4d %6.1f\n", fahrenheit, celsius);
    }

    return 0;
}
