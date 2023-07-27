#include <stdlib.h>
#include "lists.h"

/**
* free_list - Frees a linked list_t list and its strings.
* @head: Pointer to the head of the linked list.
*
* Description: This function frees the memory allocated for each node of the
* linked list, including the memory allocated for the strings in the `str`
* field of each node. It ensures there are no memory leaks after freeing.
*/
void free_list(list_t *head)
{
list_t *cur_node;

while (head != NULL)
{
cur_node = head;
head = head->next;
free(cur_node->str);
free(cur_node);
}
}

