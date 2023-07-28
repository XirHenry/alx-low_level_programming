#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Creates a new node and appends it at the end of a linked list.
 * @head: Double pointer to the list_t linked list.
 * @str: String to be stored in the new node.
 *
 * Return: Address of the new element, or NULL if memory allocation fails.
 */
list_t *add_node_end(list_t **head, const char *str)
{
    list_t *new_node;
    list_t *temp = *head;
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
    new_node->next = NULL;

    // If the list is empty, make the new node the head and return it.
    if (*head == NULL)
    {
        *head = new_node;
        return new_node;
    }

    // Traverse the list to find the last node and append the new node.
    while (temp->next)
        temp = temp->next;

    temp->next = new_node;

    return new_node;
}

