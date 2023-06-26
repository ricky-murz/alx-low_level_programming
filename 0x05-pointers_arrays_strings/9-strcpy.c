#include "main.h"
#include <stddef.h>

/**
 * _strcpy - Copies a string from src to dest
 * @dest: The destination buffer
 * @src: The source string
 *
 * Return: The pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	if (dest != NULL && src != NULL)
	{
		char *ptr = dest;

		while (*src != '\0')
		{
			*dest = *src;
			dest++;
			src++;
		}

		*dest = '\0';
		return (ptr);
	}

	return (NULL);
}

