/*
    Write a program to “fold” long input lines into two or more
    shorter lines after the last non-blank character that occurs before the n-th
    column of input. Make sure your program does something intelligent with very
    long lines, and if there are no blanks or tabs before the specified column.
*/

#include <stdio.h>
#define N 10
#define MAXLINE 1000

int getline_(char line[], int maxlength) {
  int c, i;
  for (i = 0; i < maxlength - 1 && (c = getchar()) != EOF && c != '\n'; i++) {
    line[i] = c;
  }

  if (c == '\n')
    line[i++] = c;

  line[i] = '\0';

  return i;
}

void printFolded(char line[], int len) {
  int newLineStart = 0;
  for (int i = 0; i < len; i++) {
    if (line[i] == ' ') {
      int j = i;
      while (line[j++] == ' ') {
        if (j > newLineStart + N) {
          putchar('\n');
          newLineStart = j;
          break;
        }
      }
      putchar(line[i]);
    } else {
      if (i > newLineStart + N) {
        putchar('\n');
        newLineStart = i;
      }
      putchar(line[i]);
    }
  }
}

int main() {
  char line[MAXLINE];
  int len;
  while ((len = getline_(line, MAXLINE)) > 0) {
    printFolded(line, len);
  }
}