#include "main.h"
#include <stdio.h>

/**
 * _strncat - Concatenates two strings up to n characters from src.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of characters to be appended.
 *
 * Return: Pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *original_dest = dest; /* Store the original destination pointer */

	/* Move the destination pointer to the end of the string */
	while (*dest != '\0')
		dest++;

	/* Copy up to n characters from src to dest */
	while (n > 0 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	*dest = '\0'; /* Add null terminator to the end of the concatenated string */

	return (original_dest);
}

