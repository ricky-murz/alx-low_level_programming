#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
* print_listint - Prints all elements of a listint_t list in reverse order.
* @h: Pointer to the head of the list.
*
* Return: The number of nodes in the list.
*/
size_t print_listint(const listint_t *h)
{
size_t i = 0;

/* Base case: when the list reaches the end (NULL) */
if (h == NULL)
return (0);

/* Recursive call to print the rest of the list in reverse */
i = print_listint(h->next);

/* Print the element and increment the count */
printf("%d\n", h->n);
return (i + 1);
}

