#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
* insert_nodeint_at_index - Inserts a new node at a given position
* in a listint_t linked list.
* @head: Pointer to the head of the list.
* @idx: Index of the new node, starting at 0.
* @n: Data to be stored in the new node.
*
* Return: The address of the new node, or NULL if it failed.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int b = 0;
listint_t *current_el = *head;
listint_t *new_node;

/* Handle the case when idx is 0 (insert at the beginning) */
if (idx == 0)
{
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->next = *head;
*head = new_node;
return (new_node);
}

while (current_el != NULL)
{
if (b == idx - 1)
{
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->next = current_el->next;
current_el->next = new_node;
return (new_node);
}

b++;
current_el = current_el->next;
}

return (NULL); /* Failed to insert node at index idx */
}

