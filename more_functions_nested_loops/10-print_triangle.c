#include "main.h"

/**
 * print_triangle - prints a triangle.
 *
 * Return: Always 0.
 */

void print_triangle(int size)

{
	int space;
	int line;
	int square;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (line = 0; line < size; line++)
	{
		for (space = 1 ; space <= (size - line); space++)
		{	
			_putchar(' ');
		}
		for (square = 1; square <= line; square++)
		{
			_putchar('#');
		}

	_putchar('\n');
	}
}
