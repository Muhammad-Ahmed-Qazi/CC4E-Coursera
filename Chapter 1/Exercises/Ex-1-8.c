#include <stdio.h>
#include <stdlib.h>

int main () {
    int c;

    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            putchar('-');
            putchar('\b');
            putchar('>');
        } else if (c == '\b') {
            putchar('-');
            putchar('\b');
            putchar('<');
        } else {
            putchar(c);
        }
        
    }   
    
    return 0;
}