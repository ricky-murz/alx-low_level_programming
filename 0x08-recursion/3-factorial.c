#include "main.h"
#include <stdio.h>

/**
 * factorial - Calculates the factorial of a given number.
 * @n: The number to calculate the factorial of.
 *
 * Return: The factorial of the given number, or -1 if the number is negative.
 *         Factorial of 0 is 1.
 */
int factorial(int n)
{
	if (n < 0)
		return -1; /* Return -1 to indicate an error for negative numbers */

	if (n == 0)
		return 1; /* Base case: factorial of 0 is 1 */

	return n * factorial(n - 1); /* Recursive call to calculate factorial */
}
