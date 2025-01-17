#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int htoi(char s[]) {
    int i, power, digit, total;

    i = 0;
    total = 0;
    power = 0;

    i = strlen(s) - 1;
    while (i >= 0) {
        printf("s[i] = %c\n", s[i]);
        if (s[i] >= '0' && s[i] <= '9') {
            digit = s[i] - '0';
        } else if (s[i] >= 'a' && s[i] <= 'f') {
            digit = s[i] - 'a' + 10;
        } else if (s[i] >= 'A' && s[i] <= 'F') {
            digit = s[i] - 'A' + 10;
        } else {
            return -1;
        }

        if (power == 0) {
            power = 1;
        } else {
            power *= 16;
        }

        total += digit * power;
        i--;
    }

    return total;
}

int main () {
    printf("htoi('cde5e') = %d\n", htoi("cde5e"));
    printf("htoi('f') = %d\n", htoi("f"));
    printf("htoi('F0') = %d\n", htoi("F0"));
    printf("htoi('12fab') = %d\n", htoi("12fab"));   
    
    return 0;
}