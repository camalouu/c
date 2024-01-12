/*
    Write a program to copy its input to its output, replacing each
    string of one or more blanks by a single blank.
*/

#include <stdio.h>

int main() {
  int c, lastWasSpace = 0;

  while ((c = getchar()) != EOF) {
    if (c == '\t' || c == ' ') {
      if (!lastWasSpace) {
        putchar(' ');
        lastWasSpace = 1;
      }
    } else {
      putchar(c);
      lastWasSpace = 0;
    }
  }
}
