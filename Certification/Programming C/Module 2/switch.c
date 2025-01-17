// You should write a function called expand(s, t) that copies the string s to t expanding newlines and tabs to '\n' and '\t' respectively. Use a switch statement (it will be a short switch statement). You can assume that the t variable contains enough space. Make sure to properly terminate t with the end-of-string marker '\0'.
#include <stdio.h>

void expand(const char *s, char *t) {
    int i;
    
    for (i = 0; s[i] != '\0'; i++) {
        switch (s[i]) {
            case '\n':
                *t++ = '\\';
                *t = 'n';
                break;
            case '\t':
                *t++ = '\\';
                *t = 't';
                break;
            default:
                *t = s[i];
                break;
        }
        t++;
    }

    *t = '\0';
}

int main() {
  char t[1000];
  void expand();
  expand("Hello world", t);
  printf("%s\n", t);
  expand("Hello world\n", t);
  printf("%s\n", t);
  expand("Hello\tworld\n", t);
  printf("%s\n", t);
  expand("Hello\tworld\nHave a nice\tday\n", t);
  printf("%s\n", t);
}