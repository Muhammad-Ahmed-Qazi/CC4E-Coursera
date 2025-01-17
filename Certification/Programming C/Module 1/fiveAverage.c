// This program will prompt for 5 floating point numbers. The program will print out the total of the five numbers and also print out the average.

#include <stdio.h>
#include <stdlib.h>

int main () {

    float numbers[5];
    float sum = 0.0;
    float average;
    int i;

    for (i = 0; i < 5; i++) {
        scanf("%f", &numbers[i]);
        sum += numbers[i];
    }

    average = sum / 5;

    printf("The total is: %.1f\n", sum);
    printf("The average is: %.1f\n", average);
    
    
    return 0;
}