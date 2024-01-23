/*
    Write a function reverse(s) that reverses the character
    string s. Use it to write a program that reverses its input a line at a
   time.
*/

#include <stdio.h>
#define MAXLINE 100

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

void reverse_(char line[], int len) {
  for (int i = 0, j = len - 2; i < j; i++, j--) {
    char temp = line[i];
    line[i] = line[j];
    line[j] = temp;
  }
}

int main() {
  char line[MAXLINE];
  int len;
  while ((len = getline_(line, MAXLINE)) > 0) {
    reverse_(line, len);
    printf("%s", line);
  }
}