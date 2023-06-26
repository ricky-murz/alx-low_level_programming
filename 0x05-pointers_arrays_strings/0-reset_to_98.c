#include "main.h"
#include <stdio.h>

/**
 * update_value - Updates the value of an integer through a pointer.
 * @ptr: Pointer to the integer value.
 *
 * Description: This function takes a pointer to an int as a parameter
 * and updates the value it points to 98.
 */
void update_value(int *ptr)
{
    if (ptr != NULL)
        *ptr = 98;
}

