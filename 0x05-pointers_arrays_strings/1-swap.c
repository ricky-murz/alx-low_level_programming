#include "main.h"
#include <stddef.h>

/**
 * swap_int - Swaps the values of two integers.
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 *
 * Description: This function takes two pointers to integers as parameters
 * and swaps the values they point to.
 */
void swap_int(int *a, int *b)
{
	if (a != NULL && b != NULL)
	{
		int temp;

		temp = *a;
		*a = *b;
		*b = temp;
	}
}

