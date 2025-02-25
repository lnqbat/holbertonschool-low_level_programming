#include "main.h"

/**
 * _puts - prints 
 *
 */

void _puts(char *str)

{
	int n;

	for (n = 0; str[n] ; n++)
		_putchar(str[n]);
}
