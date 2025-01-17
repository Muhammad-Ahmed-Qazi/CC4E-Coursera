/* You are to implement an interpreter for a simple programming language. Your computer has 256 characters of memory. You are to read a sequence of instructions from input and perform those instructions. At the end of the program you print the memory out as a zero-terminated C character array. Here are the instructions you need to support:

*           This is a comment, print it out and do no further processing
X           Exit the program (end-of-input also ends the program)
5 = 42      Put the number 42 into memory[5]
10 + 3      Add 3 to the contents of memory[10]
7 - 1       Suptract 1 from the contents of memory[7]
All of the numbers should be in the range of 0-255 so they fit into a C char variable.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char memory[256] = {0};
    char line[100];

    while (fgets(line, sizeof(line), stdin)) {
        if (line[0] == '*') {
            printf("%s", line);
        } else if (line[0] == 'X') {
            break;
        } else {
            int index, value;
            char operation;
            if (sscanf(line, "%d %c %d", &index, &operation, &value) == 3) {
                if (operation == '=') {
                    memory[index] = value;
                } else if (operation == '+') {
                    memory[index] += value;
                } else if (operation == '-') {
                    memory[index] -= value;
                }
            }
        }
    }

    printf("Memory:\n%s", memory);
    return 0;
}