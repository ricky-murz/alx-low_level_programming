#include "main.h"

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to check.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
    int i;

    /* Base cases */
    if (n <= 1)
        return (0); /* Not prime */

    if (n <= 3)
        return (1); /* Prime */

    /* Check for divisibility by numbers */
    for (i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return (0); /* Not prime */
    }

    return (1); /* Prime */
}

