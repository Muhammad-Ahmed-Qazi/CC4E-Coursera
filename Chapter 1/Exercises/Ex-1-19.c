#include <stdio.h>
#include <stdlib.h>

#define MAXLINES 4000

int position;
char edited[MAXLINES];

int detab()
{
    // Assuming '4' blanks per tab
    edited[position] = ' ';
    edited[++position] = ' ';
    edited[++position] = ' ';
    edited[++position] = ' ';
}

int get_line(void)
{
    int c;

    while ((c = getchar()) != EOF && c != '\n') {
        if (c == '\t') {
            detab();
        } else {
            edited[position] = c;
        }
        ++position;
    }
    if (c == '\n') {
        edited[position] = '\n';
        ++position;
    }

    return (c);
}

int main () {

    while (get_line() != EOF) {}

    edited[position] = '\0';
    printf("%s\n", edited);
    
    return 0;
}