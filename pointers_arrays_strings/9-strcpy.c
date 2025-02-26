#include "main.h"
#include "2-strlen.c"

/**
 * _strcpy - copies the string pointed to by src.
 * @dest: value final
 * @src: string
 * Return: dest
 */

char *_strcpy(char *dest, char *src)

{
	int string;

	for (string = 0; string <= _strlen(src); string++)
	{
		dest[string] = src[string];
	}
	return (dest);
}
