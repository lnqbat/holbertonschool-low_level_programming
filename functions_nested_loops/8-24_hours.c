#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: Always 0.
 */

void jack_bauer(void)

{
	int hour, mint;

	for (hour = 0; hour <= 23; hour++)
	{
		for (mint = 0; mint <= 59; mint++)
		{

			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((mint / 10) + '0');
			_putchar((mint % 10) + '0');
			_putchar('\n');
		}	
	}

}
