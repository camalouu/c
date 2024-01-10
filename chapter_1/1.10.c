/*
    Write a program to count blanks, tabs, and newlines.
*/

#include <stdio.h>
int main()
{
    int c;

    while ((c = getchar()) != EOF)
    {
        if (c == '\t')
        {
            putchar('\\');
            putchar('t');
        }
        else if (c == '\b')
        {
            putchar('\\');
            putchar('b');
        }
        else if (c == '\\')
        {
            putchar('\\\\');
        }
        else
        {
            putchar(c);
        }
    }
}