#include "main.h"

/**
 * _puts - Prints a string to the standard output.
 * @str: Pointer to the string to be printed.
 *
 * Return: None.
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}

