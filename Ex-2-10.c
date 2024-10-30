// Rewrite the function lower, which converts upper case letters to lower case, with a conditional expression instead of if-else.

#include <stdio.h>
#include <stdlib.h>

char lower(char c) {
    return (c >= 'A' && c <= 'Z') ? c + 'a' - 'A' : c;
}

int main () {
    char c;

    printf("Enter a character: ");
    c = getchar();

    printf("Lower case of %c is %c\n", c, lower(c));

    
    return 0;
}