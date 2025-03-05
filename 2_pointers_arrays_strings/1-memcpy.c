#include "main.h"

/**
 * _memcpy - that copy memory area
 *
 * @dest: pointer memory destination
 * @src: pointer source memory
 * @n: numbers octect to copy
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int i = 0;

	for ( ; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
