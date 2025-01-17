// Write a program that copies its input to output, except that it prints only one instance from each group of adjacent identical lines. (This is a simple version of the UNIX utility uniq)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int i, c, pointer, is_prev, is_same;
    char chr, prev_line[1000], curr_line[1000], output[2000];

    c = 0;
    pointer = 0;
    is_prev = 0;  // Flag to check if there's a previous line to compare
    is_same = 1;  // Reset 'is_same' to true at the beginning

    while ((chr = getchar()) != EOF) {
        // Construct current line based on 'is_prev' flag
        if (!is_prev) {
            prev_line[c] = chr;
        } else {
            curr_line[c] = chr;
        }
        c++;

        if (chr == '\n') {
            if (!is_prev) {
                // Finish the current 'prev_line' string and output it
                prev_line[c] = '\0';  // Null-terminate
                for (i = 0; i < strlen(prev_line); i++) {
                    output[i + pointer] = prev_line[i];
                }
                pointer += strlen(prev_line); // Move pointer in 'output'
                is_prev = 1;  // Now we have a previous line to compare
            } else {
                curr_line[c] = '\0';  // Null-terminate current line
                // Check if 'prev_line' and 'curr_line' are the same
                is_same = (strcmp(prev_line, curr_line) == 0);

                if (!is_same) {
                    // If they differ, copy 'curr_line' to 'output'
                    for (i = 0; i < strlen(curr_line); i++) {
                        output[i + pointer] = curr_line[i];
                    }
                    pointer += strlen(curr_line); // Move pointer in 'output'

                    // Update 'prev_line' with 'curr_line'
                    strcpy(prev_line, curr_line);
                }
                // Reset 'is_same' and 'c' for the next line
                is_same = 1;
            }
            c = 0;  // Reset character counter for new line
        }
    }

    output[pointer] = '\0';  // Null-terminate 'output' string
    printf("%s", output);  // Print the final output

    return 0;
}
