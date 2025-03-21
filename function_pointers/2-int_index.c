#include <stddef.h>
#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - searches for integer
 *
 * @array: array
 * @size: number element in the array
 * @cmp: pointer to compare values
 *
 * Return: -1
 */

int int_index(int *array, int size, int (*cmp)(int))

{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);


	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
