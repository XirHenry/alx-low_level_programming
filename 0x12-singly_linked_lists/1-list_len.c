#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Computes the number of elements in a linked list.
 * @h: Pointer to the list_t linked list.
 *
 * Return: The number of elements present in the list.
 */
size_t list_len(const list_t *h)
{
    size_t num_elements = 0;

    while (h)
    {
        num_elements++;
        h = h->next;
    }

    return num_elements;
}

