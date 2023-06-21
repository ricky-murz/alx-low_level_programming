#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints numbers 0 to 9 and avoids infinite loop
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i;

    printf("Infinite loop incoming :(\n");

    i = 0;

    while (i < 10)
    {
        putchar(i + '0');
        i++;
    }

    printf("Infinite loop avoided! \\o/\n");

    return (0);
}

