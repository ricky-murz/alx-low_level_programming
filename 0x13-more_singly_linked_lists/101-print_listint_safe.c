#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
* print_listint_safe - Prints a listint_t linked list
* @head: Pointer to the head of the list
*
* Return: The number of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)
{
size_t count = 0;
const listint_t *current = head;

while (current != NULL && count < 16)
{
printf("[%p] %d\n", (void *)current, current->n);
count++;

if (current <= current->next)
{
printf("-> [%p] %d\n", (void *)current->next, current->next->n);
return ((count));
}

current = current->next;
}

return (count);
}

