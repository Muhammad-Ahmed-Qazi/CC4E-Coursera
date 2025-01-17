// In this program you will write a program which simulates a simple hand calculator which can add, subtract, multiply, and divide floating point numbers. The calculator program has a display where the answer is always displayed after each operation is done. This display is called the "accumulator" (in computerese).

/* Command      Action

= 1.23          Sets the accumulator to 1.23
+ 5.0           Adds 5.0 to the accumulator
/ 2.0           Divides accumulator by 2.0
* 6.3           Multiplies the accumulator by 6.3
- 4.0           Subtracts 4.0 from the accumulator
S 0.0           Stops the program
*/

#include <stdio.h>

int main()
{
    char line[256];
    char opcode;
    float value, display = 0.0;

    while(fgets(line, 256, stdin) != NULL) {
        // Use sscanf to parse data from a string
        sscanf(line, "%c %f", &opcode, &value);
        if ( opcode == 'S' ) break;
        else if ( opcode == '=' ) display = value;
        else if ( opcode == '+' ) display += value;
        else if ( opcode == '/' ) display /= value;
        else if ( opcode == '*' ) display *= value;
        else if ( opcode == '-' ) display -= value;
        else printf("Unknown command\n");

        /* Replace this with your code */

        printf("Display: %.2f\n", display);
    }
}