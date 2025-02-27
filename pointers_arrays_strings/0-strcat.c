#include "main.h"

/**
 * _strcat - concatenates two strings.
 *
 * @dest: first string
 * @src: second string
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)

{
	int len, count;

	for (len = 0; dest[len] != '\0'; len++)
	;
	for (count = 0; src[count] != '\0'; count++)
	{
		dest[len] = src[count];
		len++;
	}
	return (dest);
}
