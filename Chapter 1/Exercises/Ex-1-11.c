#include <stdio.h>
#include <stdlib.h>

#define YES 1
#define NO 0

int main () {
    int c, nl, nw, nc, inword;

    inword = NO;
    nl = nw = nc = 0;

    while ((c = getchar()) != EOF) {
        ++nc; // Characters in input
        
        if (c == '\n') {
            ++nl; // Lines in input
        }
        
        if (c == ' ' || c == '\n' || c == '\t') {
            inword = NO;
        } else if (inword == NO) {
            inword = YES;
            
            if (c >= 65 && c <= 122) {
                ++nw; // Words in input
            }
        }
    }
    
    printf("Line: %d\nWords: %d\nCharacters: %d\n", nl, nw, nc);
    return 0;
}