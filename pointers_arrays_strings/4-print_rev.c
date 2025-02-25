#include "main.h"

/**
 * print_rev - print rev
 *
 * @s: string
 */

void print_rev(char *s)

{
	int n;

	for (n = 0; s[n] ; n++)
	;
	for (n = n - 1; n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
