/*
    Write a program detab that replaces tabs in the input with the
    proper number of blanks to space to the next tab stop. Assume a fixed set of
    tab stops, say every n columns. Should n be a variable or a symbolic
    parameter?
*/

#include <stdio.h>
#define N 8
#define MAXLINE 1000

int getlineWithDetab(char line[], int maxlength) {
  char c;
  int i;
  for (i = 0; i < maxlength - 1 && (c = getchar()) != '\n' && c != EOF;) {
    if (c == '\t') {
      int spaces = N - (i % N);
      while (spaces--)
        line[i++] = ' ';
    } else
      line[i++] = c;
  }

  if (c == '\n') {
    line[i++] = c;
  }

  line[i] = '\0';

  return i;
}


int main() {
  char line[MAXLINE];
  int len;

  while ((len = getlineWithDetab(line, MAXLINE)) > 0) {
    printf("%s", line);
  }
}