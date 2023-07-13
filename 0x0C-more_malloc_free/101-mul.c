#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* multiply_numbers - Multiplies two numbers
* @num1: First number to multiply
* @num2: Second number to multiply
*
* Return: The product of num1 and num2
*/
int multiply_numbers(const char *num1, const char *num2);

/**
* is_valid_number - Checks if a string represents a valid number
* @num: The string to check
*
* Return: 1 if the string is a valid number, 0 otherwise
*/
int is_valid_number(const char *num);

/**
* print_error_and_exit - Prints an error message and exits with status 98
*/
void print_error_and_exit(void);

/**
* main - Entry point of the program
* @argc: The number of command-line arguments
* @argv: An array of strings representing the command-line arguments
*
* Return: 0 on success, 1 otherwise
*/
int main(int argc, char *argv[])
{
int result;

if (argc != 3)
{
print_error_and_exit();
}

if (!is_valid_number(argv[1]) || !is_valid_number(argv[2]))
{
print_error_and_exit();
}

result = multiply_numbers(argv[1], argv[2]);
printf("%d\n", result);

return (0);
}

/**
* multiply_numbers - Multiplies two numbers
* @num1: First number to multiply
* @num2: Second number to multiply
*
* Return: The product of num1 and num2
*/
int multiply_numbers(const char *num1, const char *num2)
{
int n1 = atoi(num1);
int n2 = atoi(num2);

return (n1 * n2);
}

/**
* is_valid_number - Checks if a string represents a valid number
* @num: The string to check
*
* Return: 1 if the string is a valid number, 0 otherwise
*/
int is_valid_number(const char *num)
{
int i;

for (i = 0; num[i] != '\0'; i++)
{
if (!isdigit(num[i]))
{
return (0);
}
}
return (1);
}

/**
* print_error_and_exit - Prints an error message and exits with status 98
*/
void print_error_and_exit(void)
{
printf("Error\n");
exit(98);
}

