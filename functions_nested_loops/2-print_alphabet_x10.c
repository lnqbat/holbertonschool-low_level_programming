#include "main.h"
/**
 * print_alphabet_x10 - Write a alphabet x10
 *
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{

		char letter;

		for (letter = 'a'; letter <= 'z'; letter++)
		{

			_putchar(letter);
		}
	if (i != 9)
		_putchar('\n');

	}
}
