#include "main.h"

/**
 * puts2 - prints every other character of a string
 *
 * @str: my string
 */

void puts2(char *str)

{
	int num;

	for (num = 0; str[num]; num++)
	{
		if (num % 2 == 0)
		{
			_putchar(str[num]);
		}
	}
	_putchar('\n');
}
