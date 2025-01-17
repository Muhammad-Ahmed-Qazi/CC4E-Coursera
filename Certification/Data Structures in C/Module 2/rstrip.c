// Write a C function called py_rstrip() that removes spaces from the end of a string. This function modifies its parameter and should never be called with a constant value.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void py_rstrip(inp)
char inp[];
{
    int i = strlen(inp) - 1;
    while (inp[i] == ' ') {
        inp[i] = '\0';
        i--;
    }
}

int main () {
    char s1[] = "Hello, World!   ";
    void py_rstrip();

    py_rstrip(s1);
    printf("-%s-\n", s1);
    
    return 0;
}