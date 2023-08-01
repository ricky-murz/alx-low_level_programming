#include <stdlib.h>
#include "lists.h"

/**
* pop_listint - Deletes the head node of a listint_t linked list.
* @head: Pointer to the head of the list.
*
* Return: The data of the deleted head node (n), or 0 if the list is empty.
*/
int pop_listint(listint_t **head)
{
int data;
listint_t *temp;

if (head == NULL || *head == NULL)
return (0);

data = (*head)->n; /* Store the data of the head node */

temp = *head; /* Save the head node in a temporary pointer */
*head = (*head)->next; /* Update the head to point to the next node */
free(temp); /* Free the memory of the original head node */

return (data); /* Return the data of the deleted head node */
}

