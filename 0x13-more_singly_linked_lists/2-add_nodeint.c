#include <stdlib.h>
#include "lists.h"

/**
* add_nodeint - Adds a new node at the beginning of a listint_t list.
* @head_ptr: Pointer to the head of the list.
* @n: Value to be added to the new node.
*
* Return: The address of the new element, or NULL if it failed.
*/
listint_t *add_nodeint(listint_t **head_ptr, const int n)
{
/* Allocate memory for the new node */
listint_t *new_element = malloc(sizeof(listint_t));
if (new_element == NULL)
return (NULL);

/* Set the value of the new node */
new_element->n = n;

/* Make the new node point to the current head of the list */
new_element->next = *head_ptr;

/* Update the head to point to the new node */
*head_ptr = new_element;

return (new_element);
}

