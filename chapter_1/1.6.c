/*
    Verify that the expression getchar() != EOF is 0 or 1.
*/

#include <stdio.h>
#include <unistd.h>

int main()
{
    int c;
    while (c = getchar() != EOF)
    // while (( c = getchar() ) != EOF)
    {
        fflush(stdout);
        usleep(50000);
        putchar(c);
    }
}