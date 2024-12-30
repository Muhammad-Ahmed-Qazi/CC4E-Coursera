#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    int maxval, minval, val;
    char line[1000];

    maxval = minval = 0;

    while (1) {
        // printf("Enter a number: ");
        if (gets(line) == NULL) {
            continue;
        }
        if (strcmp(line, "done") == 0) {
            break;
        }
        val = atoi(line);
        if (val > maxval || maxval == 0) {
            maxval = val;
        }
        if (val < minval || minval == 0) {
            minval = val;
        }
    }
    
    printf("Maximum %d\n", maxval);
    printf("Minimum %d\n", minval);

    return 0;
}