#include <stdio.h>

/**
 * main - causes an infinite loop
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i;

    printf("Infinite loop incoming :(\n");

    i = 0;

    /* Commented out to avoid the infinite loop 
    while (i < 10)
    {
        putchar(i);
        i++;
    }
    */

    printf("Infinite loop avoided! \\o/\n");

    return (0);
}
