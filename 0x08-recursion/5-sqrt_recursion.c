#include "main.h"

/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 * @n: The number to calculate the square root of.
 *
 * Return: The natural square root of the given number, or -1 if no natural
 *         square root exists.
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1); /* Return -1 to indicate an error for negative numbers */

if (n == 0 || n == 1)
return (n); /* Base case: square root of 0 or 1 is the number itself */

return (sqrt_helper(n, 0, n)); /* Call helper function with initial range */
}

