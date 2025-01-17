// The program will create a 10 element array and read in 10 integers into the array. Then the program will print the integers backwards. Then the program will scan for entries in the array which contain the value 100 and print out the index of the entries with the number 100. The program will also count the number of entries which equal 100. The program should work even if there are no entries which equal 100. See the sample output for the expect format of the output.

#include <stdio.h>
#include <stdlib.h>

int main () {
    int i, v, arr[10];
    int count;

    // Read in 10 integers into the array
    for (i = 0; i < 10; i++) {
        scanf("%d", &v);
        arr[i] = v;
    }

    // Print the integers backwards
    for (i = 9; i >= 0; i--) {
        printf("numb[%d] = %d\n", i, arr[i]);
    }

    // Print out the index of the entries with the number 100
    printf("\nSearching for entries equal to 100\n");
    for (i = 0; i < 10; i++) {
        if (arr[i] == 100) {
            printf("\nFound 100 at %d", i);
            count++;
        }
    }

    // Count the number of entries which equal 100
    printf("\n\nFound %d entries with 100", count);
    
    return 0;
}