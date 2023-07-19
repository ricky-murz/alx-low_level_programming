#include <stdio.h>
#include "function_pointers.h"
/**
* print_element - Function to print an element.
* @element: The element to be printed.
*/
void print_element(int element)
{
printf("%d ", element);
}

/**
* array_iterator - Function to execute a function on each element of an array.
* @array: The array to be iterated through.
* @size: The size of the array.
* @action: Function pointer to the function to be executed on each element.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
for (i = 0; i < size; i++)
{
action(array[i]);
}
}

