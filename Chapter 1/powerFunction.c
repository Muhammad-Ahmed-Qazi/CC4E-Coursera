#include <stdio.h>
#include <stdlib.h>

power(x, n) // raise x to n-th power; n > 0
int x, n;
{
    int i, p;

    p = 1;
    for (i = 1; i <= n; ++i) {
        p = p * x;
    }

    return (p);
}

int main () {
    int i;

    for (i = 0; i < 10; ++i) {
        printf("%d %d %d\n", i, power(2, i), power(-3, i));
    }
    
    return 0;
}