#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all list.
 * @head: Pointer to the head of the doubly linked list.
 *
 * Return: The sum of all list.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
