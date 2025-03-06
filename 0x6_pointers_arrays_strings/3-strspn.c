#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 *
 * @s: string
 * @accept: charac accept
 *
 * Return: numbers byte
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *temp;

	while (*s)
	{
		temp = accept;

		while (*temp)
		{
			if (*s == *temp)
		{
			count++;
			break;
		}
		temp++;
		}

		if (!*temp)

			break;
	s++;

	}

	return (count);
}
