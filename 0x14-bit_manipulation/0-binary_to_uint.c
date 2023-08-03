#include "main.h"
#include <stdio.h>

/**
* binary_to_uint - Converts a binary number to an unsigned int.
* @b: Pointer to a string of 0 and 1 chars.
*
* Return: The converted number, or 0 if there's an invalid character
* or b is NULL.
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0;
int index = 0;

if (b == NULL)
return (0);

while (b[position] != '\0')
{
if (b[position] != '0' && b[position] != '1')
return (0);
result = result * 2 + (b[position] - '0');
position++;
}

return (result);
}
