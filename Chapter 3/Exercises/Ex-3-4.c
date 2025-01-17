// Write the analogous function itob(n, s) which converts the unsigned integer n into a binary character representation in s. Write itoh, which converts an integer to hexadecimal representation.

#include <stdio.h>
#include <stdlib.h>

void itob(n, s) 
unsigned int n;
char *s;
{
    int i = 0;

    do {
        s[i++] = n % 2 + '0';
    } while ((n /= 2) > 0);
    
    s[i] = '\0';
}

void itoh(n, s)
unsigned int n;
char *s;
{
    int i = 0;

    do {
        s[i++] = n % 16 + '0';
    } while ((n /= 16) > 0);

    s[i++] = 'x';
    s[i++] = '0';

    s[i] = '\0';
}

void reverse(s)
char *s;
{
    int i, j, n;
    char c, temp[1000];

    i = 0;
    j = 0;
    n = 1;

    while (s[i] != '\0') {
        c = s[i];
        i++;
        temp[i] = c;
    }

    while (i - n >= 0) {
        s[j] = temp[i - n];
        j++;
        n++;
    }
}

int main () {
    unsigned int n;
    char bin[1000], hex[100];

    printf("Enter a number: ");
    scanf("%u", &n);

    itob(n, &bin);
    reverse(&bin);
    printf("Binary: %s\n", bin);

    itoh(n, &hex);
    reverse(&hex);
    printf("Hexadecimal: %s\n", hex);
    
    return 0;
}