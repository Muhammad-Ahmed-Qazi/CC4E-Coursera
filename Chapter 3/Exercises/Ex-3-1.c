// Write a function expand(s, t) which converts characters like newline and tab into visible escape sequences like \n and \t as it copies the string s to t. Use a switch-case statement.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * expand(s, t)
char s[100], t[100];
{
    int i, j;
    char c;

    i = 0;
    j = 0;
    c = s[i];

    while (c != '\0') {
        c = s[i];
        switch(c) {
            case '\n':
                t[j] = '\\';
                t[j+1] = 'n';
                j += 2;
                break;
            case '\t':
                t[j] = '\\';
                t[j+1] = 't';
                j += 2;
                break;
            default:
                t[j] = c;
                j++;
                break;
        }
        i++;
    }

    return t;
}

int main () {
    char s[100], t[100];

    printf("Enter a string: ");
    fgets(s, 100, stdin);
    
    printf("Original string: %s\n", s);
    printf("Expanded string: %s\n", expand(s, t));
    
    return 0;
}