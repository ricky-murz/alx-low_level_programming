#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_listint_safe - Prints a listint_t linked list.
* @head: Pointer to the head of the list.
*
* Return: The number of nodes in the list.
*/
size_t print_listint_safe(const listint_t *head)
{
const listint_t *current_element;
size_t numNodes = 0;

while (head != NULL)
{
current_element = head;
head = head->next;
numNodes++;
printf("[%p] %d\n", (void *)current_element, current_element->n);

/* Check if we have looped back to the same node */
if (current_element <= head)
{
printf("-> [%p] %d\n", (void *)current_element, current_element->n);
exit(98);
}
}

return (numNodes);
}

