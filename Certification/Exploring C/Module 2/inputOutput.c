#include <stdio.h>
#include <stdlib.h>

int main () {
    char name[50];
    
    printf("Enter name\n");
    scanf("%s", name);
    printf("Hello %s\n", name);
    
    return 0;
}