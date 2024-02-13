/*
  Write a program to remove all comments from a C program.
  Don’t forget to handle quoted strings and character constants properly. C com-
  ments do not nest.

  [Only line comments are removed in this program]
*/
#include <stdio.h>

#define IN 1
#define OUT 0

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

void removeCommentInLine(char line[], int len) {
  int state = OUT;
  for (int i = 0; i < len - 1; i++) {
    if (line[i] == '\'' || line[i] == '\"') {
      state = (state == OUT) ? IN : OUT;
    } else if (state == IN) {
      continue;
    } else if (line[i] == '/' && line[i + 1] == '/' && state == OUT) {
      line[i] = '\n';
      line[i + 1] = '\0';
      return;
    }
  }
}

int main() {
  char line[1000];
  int len;
  while ((len = getline_(line, 1000)) > 0) {
    removeCommentInLine(line, len);
    printf("%s", line);
  }
  return 0;
}