#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 *
 * @a: matrix
 * @size: taille de la matrix
 *
 */

void print_diagsums(int *a, int size)

{
	int sum1 = 0;
	int sum2 = 0;
	int line;

	for (line = 0; line < size; line++)
	{
		sum1 += a[line * size + line];
	}
	printf("%d,", sum1);

	for (line = 0; line < size; line++)
	{
		sum2 += a[line * size + (size - 1 - line)];
	}
	printf(" %d\n", sum2);
}
