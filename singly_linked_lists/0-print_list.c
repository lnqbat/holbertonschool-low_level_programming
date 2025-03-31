#include "lists.h"

/**
 * print_list -  that prints all the elements of a list_t
 *
 * @h: pointer to the list
 *
 * Return: the number of nodes.
 */

size_t print_list(const list_t *h)
{
	int node = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
	node++;
	h = h->next;
	}
	return (node);
}
