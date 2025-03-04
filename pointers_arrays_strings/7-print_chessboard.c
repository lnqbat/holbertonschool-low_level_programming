#include "main.h"

/**
 * print_chessboard - prints the chessboard.
 *
 * @a: chessboard.
 *
 */

void print_chessboard(char (*a)[8])

{
	int line;
	int column;

	for (line = 0; line < 8; line++)
	{
		for (column = 0; column < 8; column++)
		{
			_putchar(a[line][column]);
		}

	_putchar('\n');
	}
}

