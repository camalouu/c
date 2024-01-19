/*
    Rewrite the temperature conversion program of Section 1.2 to
    use a function for conversion.
*/

float conversion(float fahr) { return (5.0 / 9.0) * (fahr - 32.0); }

#include <stdio.h>
int main() {
  float fahr, celsius;
  int lower, upper, step;
  lower = 0;
  upper = 300;
  step = 20;
  fahr = lower;
  printf("Fahrenheit Celsius\n");
  while (fahr <= upper) {
    celsius = conversion(fahr);
    printf("%3.0f %10.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
}
