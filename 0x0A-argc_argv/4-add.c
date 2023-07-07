#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	/* If no number is passed, print 0 and return */
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	/* Iterate through command-line arguments and add valid positive numbers */
	for (i = 1; i < argc; i++)
	{
		int j;

		/* Check if the current argument contains non-digit characters */
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}

		/* Convert the argument to an integer and add it to the sum */
		sum += atoi(argv[i]);
	}

	/* Print the result */
	printf("%d\n", sum);

	return (0);
}

