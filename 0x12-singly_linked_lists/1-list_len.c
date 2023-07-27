#include <stddef.h>
#include "lists.h"

/**
* list_len - Count the number of elements in a linked list_t list.
* @h: A pointer to the head node of the linked list.
*
* Return: The number of elements in the linked list.
*/
size_t list_len(const list_t *h)
{
size_t x = 0;

while (h != NULL)
{
h = h->next;
x++;
}

return (x);
}
