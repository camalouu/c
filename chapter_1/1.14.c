/*
  Write a program to print a histogram of the frequencies of dif-
  ferent characters in its input.

  (the program only counts common characters)
*/

#include <stdio.h>
#define ASCII_SIZE 96

int main() {
  int c;
  int chars[ASCII_SIZE];

  while ((c = getchar()) != EOF) {
    if (c > 31 && c < 128)
      ++chars[c - 31];
  }

  for (int i = 0; i < ASCII_SIZE; i++) {
    printf("%c: ", i + 31);
    for (int j = 0; j < chars[i]; j++) {
      printf("*");
    }
    putchar('\n');
  }
}