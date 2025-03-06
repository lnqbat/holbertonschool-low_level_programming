#include "main.h"

/**
 *  _strlen - return a length.
 * @s: var
 * Return: Always lenght
 */

int _strlen(char *s)

{
	int length = 0;

	while (*s++)
		length++;
	return (length);
}
