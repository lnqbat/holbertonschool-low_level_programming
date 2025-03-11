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
	unsigned int length = 0;
	unsigned int i;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[length] != '\0')
	{
		length++;
	}

	copy = (char *)malloc(strlen(str) + 1);

	if (copy == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < length; i++)
	{
		copy[i] = str[i];
	}

	copy[length] = '\0';

	return (copy);
}
