#include <stdlib.h>
#include "lists.h"

/**
* add_nodeint_end - Adds a new node at the end of a listint_t list.
* @head_ptr: Pointer to the head of the list.
* @n: Value to be added to the new node.
*
* Return: The address of the new element, or NULL if it failed.
*/
listint_t *add_nodeint_end(listint_t **head_ptr, const int n)
{
/* Allocate memory for the new node */
listint_t *new_element = malloc(sizeof(listint_t));
if (new_element == NULL)
return (NULL);

/* Set the value of the new node */
new_element->n = n;
new_element->next = NULL;

/* If the list is empty, make the new node the head */
if (*head_ptr == NULL)
{
*head_ptr = new_element;
}
else
{
/* Find the last node in the list */
listint_t *current = *head_ptr;
while (current->next != NULL)
{
current = current->next;
}

/* Add the new node at the end of the list */
current->next = new_element;
}

return (new_element);
}

