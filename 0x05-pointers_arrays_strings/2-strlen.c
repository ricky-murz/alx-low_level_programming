#include "main.h"
#include <stddef.h>

/**
 * _strlen - Computes the length of a string.
 * @s: Pointer to the string.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	if (s != NULL)
	{
		int length = 0;

		while (s[length] != '\0')
		{
			length++;
		}

		return (length);
	}

	return (0);
}

