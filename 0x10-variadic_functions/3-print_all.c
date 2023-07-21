#include <stdio.h>
#include <stdarg.h>

/**
 * print_char - Prints a character.
 * @args: The va_list containing the arguments.
 *
 * Return: void
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - Prints an integer.
 * @args: The va_list containing the arguments.
 *
 * Return: void
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - Prints a float.
 * @args: The va_list containing the arguments.
 *
 * Return: void
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - Prints a string.
 * @args: The va_list containing the arguments.
 *
 * Return: void
 */
void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_all - Prints anything based on the format provided.
 * @format: A list of types of arguments passed to the function.
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	unsigned int j = 0;
	const char *separator = "";

	print_function_t functions[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{0, NULL}
	};

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while (functions[j].func != NULL)
		{
			if (format[i] == functions[j].type)
			{
				printf("%s", separator);
				functions[j].func(args);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}

	va_end(args);

	printf("\n");
}

