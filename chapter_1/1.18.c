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

int isNotSpace(char c) {
  if (c == '\t' || c == ' ')
    return 0;
  return 1;
}

void trim_(char line[], int len) {
  int start;
  int end;

  for (start = 0; start < len && isNotSpace(line[start]); start++) {
  }
  for (end = len - 1; end >= 0 && isNotSpace(line[end]); end--) {
  }

  for (int i = 0; i < end - start; i++) {
    line[i] = i + start;
  }

  line[end] = '\n';
  line[end + 1] = '\0';
}

int main() {
  char line[MAXLINE];
  int len = 0;
  while ((len = getline_(line, MAXLINE))) {
    trim_(line, len);
    printf("%s", line);
  }
}