#include <stdio.h>
#include <stdlib.h>

int main() {
    int guess;

    while (1) {
        if (scanf("%d", &guess) == EOF) {  // Check for EOF
            break;
        }

        if (guess == 42) {
            printf("Nice work!\n");
            break;
        } else if (guess < 42) {
            printf("Too low - guess again\n");
        } else {
            printf("Too high - guess again\n");
        }
    }

    return 0;
}
