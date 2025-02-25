#include "main.h"

/**
 * _puts - prints
 * @str: string
 */

void _puts(char *str)

{
	int n;

	for (n = 0; str[n] ; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
