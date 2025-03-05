#include "main.h"

/**
 * _memset - fill memory with a constant byte
 *
 * @s: pointer
 * @b: value to assignate
 * @n: value octects
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int index = 0;

	for ( ; index < n; index++)
	{
		s[index] = b;
	}
	return (s);
}
