#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
(void)argv; /* Marking argv as unused to avoid the error */
printf("%d\n", argc - 1);
return (0);
}

