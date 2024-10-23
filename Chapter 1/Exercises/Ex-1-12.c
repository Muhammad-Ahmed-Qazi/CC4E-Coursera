#include <stdio.h>
#include <stdlib.h>

#define YES 1
#define NO 0

int main () {
    int c, i, j, length, inword;
    int nlength[15];

    length = 0;
    inword =  NO;
    for (i = 0; i < 15; ++i) {
        nlength[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            ++nlength[length];
            inword = NO;
        } else if (inword == NO) {
            if (c >= 'A' && c <= 'z') {
                length = 0;
                inword = YES;
            }
        }
        ++length;
    }

    printf("Lengths of words: (# represents 1 word)\n");
    for (i = 0; i < 15; ++i) {
        printf("%d : ", i);
        for (j = 0; j < nlength[i]; ++j) {
            putchar('#');
        }
        putchar('\n');
    }
    
    return 0;
}