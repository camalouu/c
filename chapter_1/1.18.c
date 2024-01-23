/*
    Write a program to remove trailing blanks and tabs from each
    line of input, and to delete entirely blank lines.
*/
#include <stdio.h>
#define MAXLINE 1000
#define LINE_STARTED 0

int getline_(char line[], int maxlength) {
  int c, i;

  for (i = 0; i < maxlength - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
    line[i] = c;
  }

  if (c == '\n') {
    line[i] = c;
    ++i;
  }
  line[i] = '\0';

  return i;
}

int isSpace(char c) {
  if (c == '\t' || c == ' ' || c == '\n')
    return 1;
  return 0;
}

void trim_(char line[], int len) {
  int start;
  int end;

  for (start = 0; start < len && isSpace(line[start]); start++) {
  }
  for (end = len - 1; end >= 0 && isSpace(line[end]); end--) {
  }

  int i;
  for (i = 0; i < end - start + 1; i++) {
    line[i] = line[i + start];
  }

  line[i] = '\n';
  line[i + 1] = '\0';
}

int main() {
  char line[MAXLINE];
  int len = 0;
  while ((len = getline_(line, MAXLINE))) {
    trim_(line, len);
    printf("%s", line);
  }
}