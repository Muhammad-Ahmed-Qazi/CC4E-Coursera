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
        ++i;
    }
    s[i] = '\0';
    return (i);
}

int reverse(s1, s2, len)
char s1[], s2[];
int len;
{
    int i, j;

    i = len - 2;
    j = 0;

    while (i >= 0) {
        s2[j] = s1[i];
        --i;
        ++j;
    }
    s2[j] = '\0';
}

int main () {
    int len;
    char line[MAXLINE], reversed[MAXLINE];

    while ((len = get_line(line, MAXLINE)) > 0) {
        if (len > 1) {
            reverse(line, reversed, len);
            printf("%s", reversed);
        }
    }

    return 0;
}