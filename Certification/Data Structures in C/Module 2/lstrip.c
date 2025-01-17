// Write a C function called py_lstrip() that removes whitespace (blanks, tabs, and newlines) from the beginning of a string. This function modifies its parameter and should never be called with a constant value.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void py_lstrip(inp)
char inp[];
{
    int i, end, start = 0;

    while (isspace(inp[start])) {
        start++;
    }

    end = strlen(inp);
    for (i = 0; i < end; i++) {
        inp[i] = inp[i + start];
    }
    inp[i] = '\0';
    
}

int main () {
    char s1[] = "   Hello   World    ";
    void py_lstrip();
 
    py_lstrip(s1);
    printf("-%s-\n", s1);
    
    return 0;
}