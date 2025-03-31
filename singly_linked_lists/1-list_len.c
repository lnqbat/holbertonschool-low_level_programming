#include "lists.h"

/**
 * list_len - that returns the number of elements in a linked list_t list.
 *
 * @h: pointer to the list
 *
 * Return: returns the number of elements.
 */

size_t list_len(const list_t *h)
{
		int node = 0;

	while (h)
	{
		node++;
		h = h->next;
	}
	return (node);
}
