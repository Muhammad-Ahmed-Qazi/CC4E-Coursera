#include <stdio.h>
#include <stdlib.h>

#define MINLEN 80
#define MAXLINE 1000
#define MAXLINES 4000

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

int append(s1, s2, index)
char s1[], s2[];
int index;
{
    int j;

    j = 0;
    while ((s2[index] = s1[j]) != '\0') {
        ++index;
        ++j;
    }
    return (index);
}

int main () {
    int len, index;
    char line[MAXLINE], lines[MAXLINES];
    
    index = 0;

    while ((len = get_line(line, MAXLINE)) > 0) {
        if (len > MINLEN) {
            index = append(line, lines, index);
        }
    }
    if (index > 0) {
        printf("%s\n", lines);
    }

    return 0;
}