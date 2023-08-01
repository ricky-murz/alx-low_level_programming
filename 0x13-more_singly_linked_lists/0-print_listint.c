#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
* print_listint - Prints all elements of a listint_t list.
* @h: Pointer to the head of the list.
*
* Return: The number of nodes in the list.
*/
size_t print_listint(const listint_t *h)
{
size_t i = 0;
const listint_t *current = h;

while (current != NULL)
{
printf("%d\n", current->n);
current = current->next;
i++;
}

return (i);
}
