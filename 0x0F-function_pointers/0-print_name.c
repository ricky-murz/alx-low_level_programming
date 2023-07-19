#include <stdio.h>
#include "function_pointers.h"
/**
* print_function - Function to print the name.
* @name: The name to be printed.
*/
void print_function(char *name)
{
printf("Name: %s\n", name);
}

/**
* print_name - Function to print a name.
* @name: The name to be printed.
* @f: Function pointer to the function responsible for printing the name.
*/
void print_name(char *name, void (*f)(char *))
{
f(name);
}

