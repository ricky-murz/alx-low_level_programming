#include <stdio.h>

/**
 * sqrt_helper - Helper function to find the square root using binary search.
 * @n: The number to calculate the square root of.
 * @start: The lower bound of the range to search.
 * @end: The upper bound of the range to search.
 *
 * Description: Implements binary search to find square root of a given number
 *              within the specified range. Recursively divides range in half
 *              and checks if square of the mid value matches the given number.
 *              Returns the square root if found, -1 otherwise.
 *
 * Return: The square root of the given number within the range [start, end],
 *         or -1 if no square root is found.
 */
int sqrt_helper(int n, int start, int end);

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

return (sqrt_helper(n, 0, n)); /* Call helper function with initial range */
}

/**
 * sqrt_helper - Helper function for binary search square root calculation.
 * @n: The number to calculate the square root of.
 * @start: The lower bound of the range to search.
 * @end: The upper bound of the range to search.
 *
 * Return: The square root of the given number within the range [start, end],
 *         or -1 if no square root is found.
 */
int sqrt_helper(int n, int start, int end)
{
int mid, square;

if (start <= end)
{
mid = start + (end - start) / 2;
square = mid *mid;

if (square == n)
return (mid); /* Square root found */

if (square < n)
return (sqrt_helper(n, mid + 1, end)); /* Search in the upper half */

return (sqrt_helper(n, start, mid - 1)); /* Search in the lower half */
}

return (-1); /* No square root found within the range */
}

