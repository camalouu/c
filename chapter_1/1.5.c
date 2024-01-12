/*
    Modify the temperature conversion program to print the table in
    reverse order, that is, from 300 degrees to 0.
*/
#include <stdio.h>
int main() {
  printf("Celsius Fahrenheit\n");
  for (float celsius = 300; celsius >= 0; celsius = celsius - 20) {
    printf("%3.0f %10.1f\n", celsius, (9.0 * celsius + 160.0) / 5.0);
  }
}