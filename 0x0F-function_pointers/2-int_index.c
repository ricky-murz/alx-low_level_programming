#include <stddef.h>

/**
* int_index - Function to search for an integer in an array.
* @array: The array to be searched.
* @size: The number of elements in the array.
* @cmp: Function pointer to the function used to compare values.
*
* Return: The index of the first element where cmp doesn't return 0, or -1 if no element matches or size <= 0.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
if (array == NULL || cmp == NULL || size <= 0)
return (-1);

{
int i;

for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}
}

return (-1);
}

