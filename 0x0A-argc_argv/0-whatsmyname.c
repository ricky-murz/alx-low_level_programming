#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Description: Prints the name of the program
 *
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
(void)argc; /* Marking argc as unused to avoid the error */
printf("%s\n", argv[0]);
return (0);
}

