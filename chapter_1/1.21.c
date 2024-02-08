/*
    Write a program entab that replaces strings of blanks by the
    minimum number of tabs and blanks to achieve the same spacing. Use the
    same tab stops as for detab. When either a tab or a single blank would
    suffice to reach a tab stop, which should be given preference?
*/

#include <stdio.h>
#define N 8 // standart linux terminal input tab stop
#define MAXLINE 1000

// maximum usage of tabs for indentation and minimal usage of spaces
int getLineWithEntab(char line[], int maxlength) {
  char c;
  int i = 0;

  while (i < maxlength - 1 && (c = getchar()) != '\n' && c != EOF) {
    if (c == ' ') {

      // count all consecutive spaces
      int spaceCount = 1;
      while ((c = getchar()) == ' ')
        spaceCount++;

      // how many spaces to put until the next tab stop
      int spacesUntilNextTabStop = N - (i % N);
      while (spacesUntilNextTabStop-- > 0 && spaceCount-- > 0) {
        line[i++] = ' ';
      }

      // how many tabs to put until its no longer possible to put a full tab
      int tabCount = spaceCount / N;
      while (tabCount-- > 0) {
        line[i++] = '\t';
      }

      // fill the remaining with spaces
      spaceCount = spaceCount % N;
      while (spaceCount-- > 0)
        line[i++] = ' ';
    }

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

  while ((len = getLineWithEntab(line, MAXLINE)) > 0) {
    printf("%s", line);
  }
  return 0;
}