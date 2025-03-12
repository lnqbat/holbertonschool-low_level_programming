#include "main.h"

/**
 * array_range - array of integers
 *
 * @min: starting value
 * @max: ending value
 *
 * Return: array
 */

int *array_range(int min, int max)

{
	int *array;
	int size;
	int i = 0;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = (int *)malloc(size * sizeof(int));

	if (array == NULL)
		return (NULL);

	for ( ; i < size; i++)
	{
		array[i] = min + i;
	}
	return (array);
}
