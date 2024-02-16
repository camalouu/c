/*
  Write a program to remove all comments from a C program.
  Don’t forget to handle quoted strings and character constants properly. C com-
  ments do not nest.
*/

#include <stdio.h>

int main() {
  char stringConstant[] = "df"
                          "dfd";
  printf("%s", stringConstant);
  return 0;
}