#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
 * puts_half - Prints the second half of a string
 * @str: The input string
 */
void puts_half(char *str)
{
	if (str != NULL)
	{
		int length = 0;
		int i, start_index;

		/* Calculate the length of the string */
		while (str[length] != '\0')
			length++;

		/* Calculate the start index for printing */
		if (length % 2 == 0)
			start_index = length / 2;
		else
			start_index = (length - 1) / 2 + 1;

		/* Print the second half of the string */
		for (i = start_index; i < length; i++)
			putchar(str[i]);

		putchar('\n');
	}
}

