#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - that frees a dlistint_t list.
 *
 * @head: The head of a dlistint_t list.
 */

void free_dlistint(dlistint_t *head)
{

	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

