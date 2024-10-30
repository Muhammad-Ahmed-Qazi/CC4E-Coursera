// for (i=0; i<lim-1 && (c=getchar()) != '\n' && c != EOF; ++i)
//      s[i] = c;

// Write a loop equivalent to the for loop above without using &&.

#include <stdio.h>
#include <stdlib.h>

int main () {
    int i, lim;
    char c;

    lim = 1000;
    char s[lim];

    for (i = 0; (i < lim - 1) * (c = getchar()) * (c != '\n') * (c != EOF); ++i) {
        s[i] = c;
    }

    printf("%s\n", s);

    return 0;
}

// Multiplication operator * is used to simulate the logical AND operator &&.