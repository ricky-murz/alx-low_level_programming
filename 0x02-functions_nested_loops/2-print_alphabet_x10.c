#include "main.h"

/**
 * print_alphabet_10x - Prints the lowercase alphabet 10 times.
 *
 * Return: void
 */
void print_alphabet_10x(void)
{
	char letter;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
	}
	_putchar('\n');
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	print_alphabet_10x();

	return (0);
}

