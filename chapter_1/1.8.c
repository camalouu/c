/*
    Write a program to count blanks, tabs, and newlines.
*/

#include <stdio.h>
int main() {
  int c, tabs, spaces, newlines;

  tabs = 0;
  spaces = 0;
  newlines = 0;

  while ((c = getchar()) != EOF) {
    if (c == '\n')
      ++newlines;
    if (c == '\t')
      ++tabs;
    if (c == ' ')
      ++spaces;
  }

  printf("\n");
  printf("Tabs: %d\n", tabs);
  printf("Spaces: %d\n", spaces);
  printf("New lines: %d\n", newlines);
}