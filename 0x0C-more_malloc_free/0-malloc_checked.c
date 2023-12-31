#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* malloc_checked - Allocates memory using malloc
* @b: The number of bytes to allocate
*
* Return: On success, a pointer to the allocated memory
*         On failure, function terminates process with a status value of 98
*/
void *malloc_checked(unsigned int b)
{
void *ptr;

ptr = malloc(b);
if (ptr == NULL)
{
fprintf(stderr, "Memory allocation failed\n");
exit(98);
}
return (ptr);
}

