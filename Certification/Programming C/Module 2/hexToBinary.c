#include <stdio.h>
#include <string.h>

void reverse(t)
char t[];
{
    int i, j, len;
    char tmp;
    len = strlen(t);
    for(i=0, j=len-1;;i++,j--) {
        if (j<i) break;
        tmp = t[i];
        t[i] = t[j];
        t[j] = tmp;
    }
    return;
}

void itob(unsigned int n, char s[]) {
    int i = 0;
    do {
        s[i++] = (n % 2) + '0';
        n /= 2;
    } while (n > 0);
    s[i] = '\0';
    reverse(s);
}

void itoh(unsigned int n, char s[]) {
    int i = 0;
    do {
        int digit = n % 16;
        if (digit < 10) {
            s[i++] = digit + '0';
        } else {
            s[i++] = digit - 10 + 'a';
        }
        n /= 16;
    } while (n > 0);
    s[i] = '\0';
    reverse(s);
}

int main() {
  char s[1000];

  itob(42,s);
  printf("42 in base-2 is %s\n", s);
  itoh(42,s);
  printf("42 in base-16 is %s\n", s);

  itob(16,s);
  printf("16 in base-2 is %s\n", s);
  itoh(16,s);
  printf("16 in base-16 is %s\n", s);

  itob(59,s);
  printf("59 in base-2 is %s\n", s);
  itoh(59,s);
  printf("59 in base-16 is %s\n", s);

  itob(100,s);
  printf("100 in base-2 is %s\n", s);
  itoh(100,s);
  printf("100 in base-16 is %s\n", s);

  itob(254,s);
  printf("254 in base-2 is %s\n", s);
  itoh(254,s);
  printf("254 in base-16 is %s\n", s);
}