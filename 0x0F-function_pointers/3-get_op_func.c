#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - Function that selects correct function to perform operation
 * asked by the user.
 * @s: The operator passed as an argument to the program.
 *
 * Return: Pointer to function that corresponds to operator given as parameter.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", add},
		{"-", subtract},
		{"*", multiply},
		{"/", divide},
		{"%", modulo},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (*s == *(ops[i].op) && *(s + 1) == '\0')
			return (ops[i].f);
		i++;
	}

	return (NULL);
}

