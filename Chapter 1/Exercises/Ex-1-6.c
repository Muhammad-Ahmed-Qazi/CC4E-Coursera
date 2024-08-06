#include <stdio.h>
#include <stdlib.h>

int main () {
    int c, bl, tab, nl;
    bl = tab = nl = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            ++bl;
        } else if (c == '\t') {
            ++tab;
        } else if (c == '\n') {
            ++nl;
        }
    }
    
    printf("Blanks: %d\nTabs: %d\nNewlines: %d\n", bl, tab, nl);
    return 0;
}