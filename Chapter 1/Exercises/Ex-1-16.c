#include <stdio.h>
#include <stdlib.h>

#define MAXLINE 1000
#define MAXLINES 4000
#define YES 1
#define NO 0

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

int clean(s1, s2, index)
char s1[], s2[];
int index;
{
    char key;
    int j, isTrailing;

    j = 0;
    isTrailing = YES;
    key = s1[j];

    while (key != '\0') {
        if (isTrailing == YES) {
            if (key != ' ' && key != '\t') {
                isTrailing = NO;
                s2[index] = key;
                ++index;
            }
        } else {
            s2[index] = key;
            ++index;
        }
        ++j;
        key = s1[j];
    }
    return (index);
}

int main () {
    int len, index;
    char line[MAXLINE], lines[MAXLINES];
    
    index = 0;

    while ((len = get_line(line, MAXLINE)) > 0) {
        if (len > 1) {
            index = clean(line, lines, index);
        }
    }

    if (index > 0) {
        printf("%s", lines);
    }
    
    return 0;
}