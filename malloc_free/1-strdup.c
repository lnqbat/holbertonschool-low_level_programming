#include "main.h"

/**
 * _strdup - returns a pointer
 *
 * @str: the string to copy
 *
 * Return: null or copy.
 */

char *_strdup(char *str)

{
	char *copy;

	if (str == NULL)
	{
		return (NULL);
	}

	copy = (char *)malloc(strlen(str) + 1);

	if (copy == NULL)
	{
		return (NULL);
	}

	strcpy(copy, str);

	return (copy);
}
