#include "main.h"

/**
 *  puts_half - that prints half of a string
 *
 *  @str: is a string
 */

void puts_half(char *str)

{
	int string;
	int n;
	int mid;

	for (string = 0; str[string]; string++)
	;

		if (string % 2 == 0)

			mid = string / 2;

		else
			mid = (string + 1) / 2;

		for (n = mid; n < string; n++)
		{
			_putchar(str[n]);
		}
	_putchar('\n');
}
