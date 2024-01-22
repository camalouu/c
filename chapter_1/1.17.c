/*
    Write a program to print all input lines that are longer than 80
    characters.
*/

#include <stdio.h>
#define MAXLINE 1000

int getline_(char line[], int length) {
  int c, i;

  for (i = 0; i < length - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
    line[i] = c;
  }

  if (c == '\n') {
    line[i] = c;
    ++i;
  }
  line[i] = '\0';

  return i;
}

int main() {

  char line[MAXLINE];
  int len = 0;
  while ((len = getline_(line, MAXLINE)) > 0)
    if (len > 8)
      printf("\n%s", line);
}
