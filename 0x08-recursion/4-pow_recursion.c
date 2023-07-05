#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - Calculates the value of x raised to the power of y.
 * @x: The base number.
 * @y: The exponent.
 *
 * Return: The value of x raised to the power of y.
 *         If y is negative, returns -1.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return -1; /* Return -1 to indicate an error for negative exponents */

	if (y == 0)
		return 1; /* Base case: any number raised to the power of 0 is 1 */

	return x * _pow_recursion(x, y - 1); /* Recursive call to calculate power */
}
