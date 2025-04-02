 #include "lists.h"

/**
 * get_dnodeint_at_index - that returns the nth node of a linked list.
 *
 * @head: Pointer to head node
 * @index: index at the node
 *
 * Return: The nth node of the linked list.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		if (i == index)
			return (current);
		current = current->next;
		i++;
	}
	return (NULL);
}
