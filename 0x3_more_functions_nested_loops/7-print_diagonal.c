#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 *
 * @n: charac
 *
 * Return: Always
 */

void print_diagonal(int n)

{
	int space;
	int line;

	if (n > 0)
	{

		for (line = 0; line < n; line++)
		{
			for (space = 0; space < line; space++)
			{
				_putchar(' ');
			}
				_putchar(92);
				_putchar('\n');
		}
	}
	else
		_putchar('\n');

}
