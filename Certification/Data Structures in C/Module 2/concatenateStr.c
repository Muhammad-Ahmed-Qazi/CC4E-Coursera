// Write a C program to prompt for two strings and concatenate them as shown in in the Python code below. Use the functions strcpy and strcat from the string.h library in your code. Pre-allocate your character arrays large enough to handle up to 100 characters on input for each string (i.e. do not use malloc as we have not yet covered that yet).

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    char str1[100], str2[100], str3[110];
    
    printf("Enter two strings\n");
    scanf("%s\n%s", str1, str2);

    strcpy(str3, strcat(str1, " & "));
    printf("%s", strcat(str1, str2));
    
    return 0;
}