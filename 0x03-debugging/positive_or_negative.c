#include "main.h"
#include <stdio.h>

/**
 * positive_or_negative - Prints if an integer is positive, negative, or zero
 * @i: The integer to check
 *
 * Return: void
 */
void positive_or_negative(int i)
{
	if (i == 0)
		printf("0 is zero\n");
	else if (i > 0)
		printf("%d is positive\n", i);
	else
		printf("%d is negative\n", i);
}

