/*
    Write a program to determine the ranges of char, short, int,
    and long variables, both signed and unsigned, by printing appropriate
    values from standard headers and by direct computation. Harder if you com-
    pute them: determine the ranges of the various floating-point types.
*/

#include <float.h>
#include <stdio.h>

int main() {
  printf("char: %lu\n", sizeof(char));
  printf("short: %lu\n", sizeof(short));
  printf("long: %lu\n", sizeof(long));
  printf("int: %lu\n", sizeof(int));

  printf("unsigned char: %lu\n", sizeof(unsigned char));
  printf("unsigned short: %lu\n", sizeof(unsigned short));
  printf("unsigned long: %lu\n", sizeof(unsigned long));
  printf("unsigned int: %lu\n", sizeof(unsigned int));

  printf("Float: %e to %e\n", FLT_MIN, FLT_MAX);
  printf("Double: %e to %e\n", DBL_MIN, DBL_MAX);
  printf("Long Double: %Le to %Le\n", LDBL_MIN, LDBL_MAX);
}