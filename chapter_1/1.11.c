/*
    word counter

    How would you test the word count program? What kinds of
    input are most likely to uncover bugs if there are any?

    We can test edge cases like too long input, non ascii characters etc.
*/

#include <stdio.h>
#define IN 1
#define OUT 0

int main() {
  int c, nl, nw, nc, state;
  state = OUT;
  nl = nw = nc = 0;
  while ((c = getchar()) != EOF) {
    ++nc;
    if (c == '\n')
      ++nl;
    if (c == ' ' || c == '\n' || c == '\t')
      state = OUT;
    else if (state == OUT) {
      state = IN;
      ++nw;
    }
  }
  printf("%d %d %d\n", nl, nw, nc);
}