#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at a given index
 *
 * @head: Pointer to the pointer of the head node
 * @index: The index of the node to delete
 *
 * Return: 1 if successful, -1 if it fails
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int count = 0;


	if (!head || !*head)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = current->next;
		if (*head)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}
	while (current && count < index)
	{
		current = current->next;
		count++;
	}

	if (!current)
		return (-1);

	if (current->next)
		current->next->prev = current->prev;

	if (current->prev)
		current->prev->next = current->next;

	free(current);
	return (1);
}
