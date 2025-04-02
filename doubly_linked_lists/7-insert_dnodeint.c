 #include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a node at a given index.
 *
 * @h: Pointer to the head of the list
 * @idx: Index where the node  inserted
 * @n: Data for the new node
 *
 * Return: Address of the new node, or NULL if it fails
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *temp = *h;
	unsigned int i = 0;

	if (!h)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
	{
		return (NULL);
	}
	new_node->n = n;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	while (temp && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}
	if (!temp)
	{
		free(new_node);
		return (NULL);
	}
	if (!temp->next)
	{
		return (add_dnodeint_end(h, n));
	}
	new_node->next = temp->next;
	new_node->prev = temp;
	temp->next->prev = new_node;
	temp->next = new_node;

	return (new_node);
}
