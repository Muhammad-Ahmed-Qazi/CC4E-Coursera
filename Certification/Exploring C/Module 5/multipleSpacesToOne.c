#include <stdio.h>

int main() {
    int c, lastChar;

    lastChar = 0;  // Tracks the last character read

    while ((c = getchar()) != EOF) {
        if (c != ' ' || lastChar != ' ') {
            putchar(c);
        }
        lastChar = c;
    }

    return 0;
}
