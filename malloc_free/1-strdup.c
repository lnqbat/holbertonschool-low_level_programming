#include "main.h"
#include "2-strncpy.c"

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
	unsigned int i = 0;
	unsigned int j;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}

	copy = malloc(sizeof(char) * i + 1);

	if (copy == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < i; j++)
	{
		copy[j] = str[j];
	}


	return (copy);
}
