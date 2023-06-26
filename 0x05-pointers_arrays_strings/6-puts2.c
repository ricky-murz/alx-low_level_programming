#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
 * puts2 - Prints every other character of a string
 * @str: The input string
 */
void puts2(char *str)
{
	if (str != NULL)
	{
		int i = 1;

		while (str[i] != '\0')
		{
			putchar(str[i]);
			i += 2;
		}

		putchar('\n');
	}
}

