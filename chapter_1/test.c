#include <stdio.h>

void badFuntion(char *line) {

  line[0] = 't';
  line[1] = 'e';
  line[2] = 's';
  line[3] = 't';
  line[4] = '\n';
  line[5] = '\0';

  line[20000] = 'a';
  printf("%s", line);
}

int main() {
  // char line[10];
  // line = (char *)malloc(10 * sizeof(char));

  // badFuntion(line);
  while (3)
    printf("%d\n", 18 / 8);
  return 0;
}