#include <stdlib.h>
#include <string.h>

/**
* _realloc - Reallocates a memory block using malloc and free
* @ptr: Pointer to the memory block to be reallocated
* @old_size: Size of the old memory block in bytes
* @new_size: New size of the memory block in bytes
*
* Return: Pointer to the reallocated memory block, or NULL on failure
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr;

if (new_size == 0)
{
free(ptr);
return (NULL);
}

if (ptr == NULL)
return (malloc(new_size));

if (new_size == old_size)
return (ptr);

new_ptr = malloc(new_size);

if (new_ptr == NULL)
return (NULL);

/* Copy contents from old memory block to new memory block */
memcpy(new_ptr, ptr, (old_size < new_size) ? old_size : new_size);

free(ptr);

return (new_ptr);
}

