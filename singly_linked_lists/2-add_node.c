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
 * add_node - adds a new node at the beginning of a list_t list.
 *
 * @str: the new string
 * @head: the gead of a linked list
 *
 * Return: new node head list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int size;

	if (str == NULL)
		return (NULL);

	size = _strlen(str);

	new_node = (list_t *)malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = size;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
