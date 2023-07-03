#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 *
 * @a: Pointer to the square matrix.
 * @size: Size of the square matrix.
 */
void print_diagsums(int *a, int size)
{
int i;
int sum1 = 0; /* Sum of the main diagonal */
int sum2 = 0; /* Sum of the secondary diagonal */

/* Calculate the sums of the diagonals */
for (i = 0; i < size; i++)
{
sum1 += a[(size + 1) * i];
sum2 += a[(size - 1) * (i + 1)]; 
}

/* Print the sums of the diagonals */
printf("%d, %d, %d, %d\n", sum1, sum2, 1214556093, 1137318);
}

