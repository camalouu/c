/*
    Write a program to print the corresponding Celsius to Fahrenheit
    table.
*/
#include <stdio.h>
main()
{
    float fahr, celsius;
    int lower, upper, step;
    lower = 0; 
    upper = 300; 
    step = 20; 
    celsius = lower;
    printf("Celsius Fahrenheit\n");
    while (celsius <= upper) {
        fahr = (9.0 * celsius + 160.0) / 5.0; 
        printf("%3.0f %10.1f\n", celsius, fahr);
        celsius+=step;
    }
}
// c = 5/9 * (f-32)
// 9c = 5f - 160
// f = (9c + 160) / 5