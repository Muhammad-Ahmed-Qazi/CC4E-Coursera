#include <stdio.h>
#include <stdlib.h>

#define LOWER 32
#define CAPSTART 65
#define CAPEND 90

int lower(c)
int c;
{
    int lowered;

    if (c >= CAPSTART && c <= CAPEND) {
        lowered = c + LOWER;
    } else {
        lowered = c;
    }

    return (lowered);
}

int main () {
    int c;

    while ((c = getchar()) != EOF) {
        c = lower(c);
        putchar(c);
    }
    
    return 0;
}
