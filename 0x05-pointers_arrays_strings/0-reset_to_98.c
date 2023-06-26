#include <stdio.h>

/**
 * reset_to_98 - Resets the value of an integer to 98.
 * @n: Pointer to the integer value.
 *
 * Description: This function takes a pointer to an int as a parameter
 * and sets the value it points to 98.
 */
void reset_to_98(int *n)
{
    if (n != NULL)
        *n = 98;
}

