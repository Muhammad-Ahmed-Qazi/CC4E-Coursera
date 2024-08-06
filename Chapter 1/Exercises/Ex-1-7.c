#include <stdio.h>
#include <stdlib.h>

int main () {
    int c, flag;
    flag = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ' && flag == 0) {
            flag = 1;
            putchar(c);
        } else if (c == ' ' && flag == 1) {
            ;
        } else if (c != ' ' && flag == 1) {
            flag = 0;
            putchar(c);
        } else {
            putchar(c);
        }
    }
    
    return 0;
}