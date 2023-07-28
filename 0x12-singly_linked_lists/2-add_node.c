#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Creates a new node and inserts it at the beginning of a linked list.
 * @head: A double pointer to the list_t linked list.
 * @str: The new string to be stored in the node.
 *
 * Return: The address of the new element, or NULL if memory allocation fails.
 */
list_t *add_node(list_t **head, const char *str)
{
    list_t *new_node;
    unsigned int str_length = 0;

    // Calculate the length of the new string.
    while (str[str_length])
        str_length++;

    // Allocate memory for the new node.
    new_node = malloc(sizeof(list_t));
    if (!new_node)
        return NULL;

    // Copy the new string to the new node.
    new_node->str = strdup(str);

    // Set the length and next pointer for the new node.
    new_node->len = str_length;
    new_node->next = (*head);

    // Update the head to point to the new node.
    (*head) = new_node;

    return (*head);
}

