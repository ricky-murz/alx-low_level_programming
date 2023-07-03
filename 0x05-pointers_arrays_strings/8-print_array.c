#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers.
 * @a: Pointer to the array.
 * @n: Number of elements to print.
 *
 * Description: This function prints the elements of an array of integers,
 *              followed by a new line. The elements are printed in the same
 *              order as they are stored in the array. The numbers are separated
 *              by a comma and a space.
 */
void print_array(int *a, int n)
{
    int i;

    if (n <= 0)
    {
        printf("\n");
        return;
    }

    printf("%d", a[0]);

    for (i = 1; i < n; i++)
    {
        printf(", %d", a[i]);
    }

    printf("\n");
}

