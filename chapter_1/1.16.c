/*
    Revise the main routine of the longest-line program so it will
    correctly print the length of arbitrarily long input lines, and as much as
    possible of the text.
*/

#include <stdio.h>
#define MAXLINE 10 /* maximum input line size */

int getline_(char line[], int maxline);

void copy(char to[], char from[]);

int main() {
  int len;
  int max;
  char line[MAXLINE];
  char longest[MAXLINE];
  max = 0;
  while ((len = getline_(line, MAXLINE)) > 0) {
    if (len > max) {
      max = len;
      copy(longest, line);
      if (line[max - 1] != '\n' && line[max - 1] != EOF) {
        int outBuffer;
        while ((outBuffer = getchar()) != EOF && outBuffer != '\n') {
          len++;
        }
      }
      printf("\nout buffer line length: %d\n", len - max);
    }
  }

  if (max > 0)
    printf("\n%s\n%d\n", longest, max);
  return 0;
}

int getline_(char s[], int lim) {
  int c, i;

  for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    s[i] = c;

  if (c == '\n') {
    s[i] = c;
    ++i;
  }

  s[i] = '\0';
  return i;
}

void copy(char to[], char from[]) {
  int i;
  i = 0;
  while ((to[i] = from[i]) != '\0')
    ++i;
}