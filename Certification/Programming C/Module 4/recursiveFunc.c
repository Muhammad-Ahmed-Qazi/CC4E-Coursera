//You should write a recursive function called sumseries() that takes as its input a single integer and returns the sum of all the numbers from 1..the provided number. This is very similar to the function described in lecture except for some error checking. First, if the provided number is less than one, return zero as the sum. Also, in order to avoid stack overflow, if the provided number is above 100 return -1. You cannot use a do, for, or integer division to compute the sum since that would not be recursive :).

#include <stdio.h>
#include <stdlib.h>

int sumseries(int ival) {
    if (ival < 1) {
        return 0;
    } else if (ival > 100) {
        return -1;
    } else {
        return ival + sumseries(ival - 1);
    }
}

int main() {
  printf("sumseries(0) returns %d\n", sumseries(0));
  printf("sumseries(1) returns %d\n", sumseries(1));
  printf("sumseries(5) returns %d\n", sumseries(5));
  printf("sumseries(42) returns %d\n", sumseries(42));
  printf("sumseries(-42) returns %d\n", sumseries(-42));
  printf("sumseries(100) returns %d\n", sumseries(100));
  printf("sumseries(101) returns %d\n", sumseries(101));
  printf("sumseries(1000) returns %d\n", sumseries(1000));
}