#include <stdio.h>

/**
* main - prevents an infinite loop
* Return: 0
*/

int main(void)
{
    int i;

    printf("Infinite loop incoming :(\n");

    i = 0;

    while (i < 10)
    {
        putchar(i + '0'); // Adding '0' to convert integer to character
        i++; // Incrementing the loop variable
    }

    printf("Infinite loop avoided! \\o/\n");

    return (0);
}

