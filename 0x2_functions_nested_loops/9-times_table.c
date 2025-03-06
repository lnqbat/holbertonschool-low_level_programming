#include "main.h"

/**
 * times_table - Print the 9 times tables.
 *
 *
 */

void times_table(void)
{
	int i, n, mult;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		for (n = 1; n <= 9; n++)
		{
			_putchar(',');
			_putchar(' ');
			mult = i * n;
			if (mult <= 9)
			{
				_putchar(' ');
				_putchar(mult + '0');
			}
			else
			{
				_putchar(mult / 10 + '0');
				_putchar(mult % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
