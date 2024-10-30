// Write a function htoi(s), which converts a string of hexadecimal digits into its equivalent integer value. The allowable digits are 0 through 9, a through f, and A through F.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int htoi(char s[]) {
    int i, n, power, digit, total;

    i = 0;
    n = 0;
    total = 0;
    power = 0;

    if (s[i] == '0' && (s[i+1]) == 'x' || s[i+1] == 'X') {
        i = strlen(s) - 1;
        while (i > 1) {
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
            n++;
        }
    } else {
        return -1;
    }

    return total;
}

int main () {
    int result;
    char hexdigit[100];
    
    printf("Enter a hexadecimal number: ");
    scanf("%s", hexdigit);

    result = htoi(hexdigit);

    if (result == -1) {
        printf("Invalid hexadecimal number\n");
    } else {
        printf("The equivalent integer value is: %d\n", result);
    }

    return 0;
}