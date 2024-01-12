/*
  Write a program to print a histogram of the lengths of words
  in its input. It is easy to draw the histogram with the bars horizontal; a
  vertical orientation is more challenging.
*/

#include <stdio.h>
#define IN 1
#define OUT 0
#define MAX_WORD_LENGHT 10

int main() {
  int c;
  int state = OUT;
  int lengths[MAX_WORD_LENGHT];
  int wl = 0;

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t') {
      state = OUT;
      ++lengths[wl];
      wl = 0;
    } else if (state == OUT) {
      state = IN;
    }
    if (state == IN) {
      ++wl;
    }
  }

  if (state == IN)
    ++lengths[wl];

  for (int i = 0; i < MAX_WORD_LENGHT; i++) {
    printf("%2d:", i);
    for (int j = 0; j < lengths[i]; j++) {
      printf("*");
    }
    putchar('\n');
  }
}