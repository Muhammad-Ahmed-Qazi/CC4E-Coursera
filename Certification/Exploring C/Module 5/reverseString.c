void reverse(char s[]) {
    int i, j;
    char temp;

    j = strlen(s) - 1; // Index of the last character
    for (i = 0; i < j; i++, j--) {
        // Swap characters at positions i and j
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}