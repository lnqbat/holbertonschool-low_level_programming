#include "main.h"

/**
 * print_square - that prints a square, followed by a new line.
 *
 * @size: #
 *
 * Return: Always 0 .
 */

void print_square(int size)

{
	int space;
	int line;

	if (size > 0)
	{
		for (line = 0; line < size; line++)
		{
			for (space = 0; space < size; space++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
