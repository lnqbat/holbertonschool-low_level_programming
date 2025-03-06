#include "main.h"

/**
 * _strncpy -  that copies a string.
 *
 * @dest: The destinations .
 * @src: The sources .
 * @n: numbers bytes on the sources .
 *
 * Return: dest .
 */

char *_strncpy(char *dest, char *src, int n)

{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)

		dest[i] = src[i];
	for ( ; i < n; i++)

		dest[i] = '\0';

	return (dest);
}
