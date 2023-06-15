#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints a message to standard error
 *
 * Return: 1 (Error)
 */
int main(void)
{
	/* Writing to standard error using the write function */
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
