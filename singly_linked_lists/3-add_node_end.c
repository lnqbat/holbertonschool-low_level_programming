#include "lists.h"
#include <string.h>

/**
* _strlen - return a length
* @s: string
* Return: length
*/

unsigned int _strlen(const char *s)
{
	 unsigned int len = 0;

	while (s[len] != '\0')
	len++;

	return (len);
}

/**
 * add_node_end - adds a new node at the end of a list_t list.
 *
 * @head: pointer to pointer head
 * @str: the new string
 *
 * Return: the end node list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end_node, *temp;
	unsigned int size;

	end_node = (list_t *)malloc(sizeof(list_t));

	if (!end_node)
	{
		return (NULL);
	}
	end_node->str = strdup(str);
		size = _strlen(str);
	end_node->len = size;
	end_node->next = NULL;

	if (*head == NULL)
		*head = end_node;

	else
	{
		temp = *head;

		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = end_node;
	}

	return (end_node);
}
