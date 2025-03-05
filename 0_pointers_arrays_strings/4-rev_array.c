#include "main.h"

/**
 * reverse_array - reverse array of integrers.
 *
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 */

void reverse_array(int *a, int n)

{

	int i, temp;

	for (i = 0; i < n; i++)
	{
		n--;
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;

	}
}
