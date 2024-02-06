/*
    Write a program entab that replaces strings of blanks by the
    minimum number of tabs and blanks to achieve the same spacing. Use the
    same tab stops as for detab. When either a tab or a single blank would
    suffice to reach a tab stop, which should be given preference?
*/

#include <stdio.h>
#define N 8 // standart linux tab stop
#define MAXLINE 1000

int putTab(char line[], int i) {
  int tabStop = N;
  while (tabStop--) {
    line[i++] = ' ';
  }
}

int getLineWithEntab(char line[], int maxlength) {
  char c;
  int i = 0;

  while (i < maxlength - 1 && (c = getchar()) != '\n' && c != EOF) {
    if (c == ' ') {
      int spaceCount = 1;
      char nextc;

      while ((nextc = getchar()) == ' ')
        spaceCount++;

      int tabCount = spaceCount / N;

      while (tabCount--)
        line[i++] = '\t';

      spaceCount = spaceCount % N;

      while (spaceCount--)
        line[i++] = ' ';

      line[i++] = nextc;
    } else {
      line[i++] = c;
    }
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

  while ((len = getLineWithEntab(line, MAXLINE)) > 0) {
    printf("%s", line);
  }
  return 0;
}