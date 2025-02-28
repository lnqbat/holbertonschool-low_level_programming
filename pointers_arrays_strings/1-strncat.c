#include "main.h"

/**
 * _strncat - concatenates two strings.
 *
 * @dest: string
 * @src: string 2
 * @n: n bytes from src
 *
 *  Return: dest
 */

char *_strncat(char *dest, char *src, int n)

{
	int len, count;

	for (len = 0; dest[len] != '\0'; len++)
	;
	for (count = 0; src[count] != '\0'; count++)
	{
		if (count < n)

		dest[len] = src[count];
		len++;
	}
	
	return (dest);
}
