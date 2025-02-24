#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: Always 0.
 */

void more_numbers(void)

{
	int numb;
	int i;

	for (i = 0; i < 10; i++)
	{

		for (numb = 0; numb <= 14; numb++)
		{
			if (numb > 9)
			{
				_putchar((numb / 10) + 48);
			}
		_putchar((numb % 10) + 48);

		}
		_putchar('\n');
	}
}
