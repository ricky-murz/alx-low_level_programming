#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
* delete_nodeint_at_index - Deletes node at index of a listint_t linked list.
* @head: Pointer to the head of the list.
* @index: Index of the node to be deleted, starting at 0.
*
* Return: 1 if it succeeded, -1 if it failed.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int b = 0;
listint_t *current = *head;
listint_t *temp;

if (*head == NULL) /* If the list is empty */
return (-1);

if (index == 0) /* If the node to be deleted is the head */
{
*head = (*head)->next;
free(current);
return (1);
}

while (current != NULL)
{
if (b == index - 1) /* If the previous node is found */
{
temp = current->next;
if (temp == NULL) /* If the node to be deleted does not exist */
return (-1);

current->next = temp->next; /* Link the previous node to the next node */
free(temp); /* Free the memory of the node to be deleted */
return (1);
}

b++;
current = current->next;
}

return (-1); /* Failed to delete node at index */
}

