#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_char - Prints a character.
 * @args: The va_list containing the arguments.
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - Prints an integer.
 * @args: The va_list containing the arguments.
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - Prints a float.
 * @args: The va_list containing the arguments.
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - Prints a string.
 * @args: The va_list containing the arguments.
 */
void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * get_print_function - Gets the corresponding print function for a format character.
 * @type: The format character.
 *
 * Return: A pointer to the corresponding print function, NULL if not found.
 */
void (*get_print_function(char type))(va_list)
{
	struct print_function
	{
		char type;
		void (*func)(va_list);
	};

	struct print_function functions[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{0, NULL}
	};

	int i = 0;
	while (functions[i].type)
	{
		if (functions[i].type == type)
			return (functions[i].func);
		i++;
	}

	return (NULL);
}

/**
 * print_all - Prints anything based on the format provided.
 * @format: A list of types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	const char *separator = "";

	va_start(args, format);

	while (format && format[i])
	{
		void (*func)(va_list) = get_print_function(format[i]);

		if (func)
		{
			printf("%s", separator);
			func(args);
			separator = ", ";
		}
		i++;
	}

	va_end(args);
	printf("\n");
}

