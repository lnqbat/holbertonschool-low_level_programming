#include <stddef.h>
#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - array
 *
 * @array: it's a array
 * @size: size of the array
 * @action: pointer to the function you need to use
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))

{
	size_t i;

	if (array == NULL || size == 0)
		exit(-1);

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
