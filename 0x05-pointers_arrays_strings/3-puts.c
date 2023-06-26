#include "main.h"
#include <stdio.h>

/**
 * _puts - Prints a string followed by a new line.
 * @str: Pointer to the string.
 */
void _puts(char *str)
{
	if (str != NULL)
	{
		int i = 0;

		while (str[i] != '\0')
		{
			putchar(str[i]);
			i++;
		}

		putchar('\n');
	}
}

