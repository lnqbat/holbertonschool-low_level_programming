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
	int count = 0;
	char *temp = accept;

	while (*s)
	{
		while (*temp)
		{
			if (*s == *temp)
			{
				count = 1;
				break;
			}
		temp++;
	}
	if (!count)
	{
		break;
	}
	count++;
	s++;
	}
	return (count);
}

