#include "main.h"
#include <ctype.h>

/**
 * _isupper - Checks if a character is an uppercase letter.
 * @c: The character to be checked.
 *
 * Return: 1 if the character is an uppercase letter, 0 otherwise.
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}

