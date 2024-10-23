#include <stdio.h>
#include <stdlib.h>

#define MAXLINE 1000

int get_line(s, lim)
char s[];
int lim;
{
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        s[i] = c;
    }
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return (i);
}

int copy(s1, s2)
char s1[], s2[];
{
    int i;
    
    i = 0;
    while ((s2[i] = s1[i]) != '\0') {
        ++i;
    }
}

int main () {
    int len, max;
    char line[MAXLINE], save[MAXLINE];

    max = 0;
    while ((len = get_line(line, MAXLINE)) > 0) {
        if (len > max) {
            max = len;
            copy(line, save);
        }
    }
    if (max > 0) {
        printf("%s", save);
    }
    
    return 0;
}