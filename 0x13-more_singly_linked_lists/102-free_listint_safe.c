#include <stdio.h>
#include <stdlib.h>

/**
* struct listint_t - singly linked list
* @value: integer
* @next: points to the next node
*/
typedef struct listint_t
{
int value;
struct listint_t *next;
} listint_t;

/**
* free_listint_safe - Frees a listint_t list.
* @h: Pointer to the head of the list.
*
* Return: The size of the list that was freed.
* The function sets the head to NULL.
*/
size_t free_listint_safe(listint_t **h)
{
size_t count = 0;
listint_t *current, *next_node;

current = *h;
while (current)
{
next_node = current->next;
free(current);
count++;
current = next_node;
}

*h = NULL; /* Set head to NULL after freeing the list */
return (count);
}
