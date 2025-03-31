#include "lists.h"

/**
 * print_dlistint - returns the number of elements in a linked dlistint_t list.
 *
 * @h: pointer to a string
 *
 * Return: node
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		h = h->next;
	}

	return (node);
}
