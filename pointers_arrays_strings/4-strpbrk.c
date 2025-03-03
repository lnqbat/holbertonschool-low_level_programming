#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 *
 * @s: string
 * @accept: accept charac
 *
 * Return: the fist charac on the string
 */

char *_strpbrk(char *s, char *accept)

{
	char *temp;

	while (*s)
	{
		temp = accept;

		while (*temp)
		{
			if (*s == *temp)
		{
			return (s);
		}
			temp++;
		}
	s++;

	}

	return ('\0');
}
