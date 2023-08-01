#include <stdlib.h>
#include "lists.h"

/**
* free_listint2 - Frees a listint_t list and sets the head to NULL.
* @head: Pointer to the head of the list.
*
* Return: void.
*/
void free_listint2(listint_t **head)
{
listint_t *current_element;
listint_t *next;

current_element = *head; /* Start at the head of the list */

while (current_element != NULL)
{
/* Save the next node before freeing the current one */
next = current_element->next;
/* Free the current node */
free(current_element);
/* Move to the next node */
current_element = next;
}

/* Set the head to NULL after freeing all nodes */
*head = NULL;
}

