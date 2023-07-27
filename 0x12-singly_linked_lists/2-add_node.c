#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Add a new node at the beginning of a list_t list.
 * @head: Double pointer to the head of the list.
 * @str: String to be duplicated and added to the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
    list_t *new_node;

    if (str == NULL)
        return NULL;

    new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
        return (NULL);

    /* Duplicate the input string using strdup */
    new_node->str = strdup(str);
    if (new_node->str == NULL)
    {
        free(new_node);
        return (NULL);
    }

    /* Set the new node's next pointer to the current head of the list */
    new_node->next = (*head);

    /* Update the head to point to the new node, making it the new head */
    (*head) = new_node;

    return (*head);
}

