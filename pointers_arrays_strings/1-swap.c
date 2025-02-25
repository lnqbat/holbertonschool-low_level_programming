#include "main.h"

/**
 * swap_int - swap var on to numb
 * @a: var = 98 to change b
 * @b: var = 42 to change a
 */

void swap_int(int *a, int *b)

{
	int temp = *a;
	*a = *b;

	*b = temp;
}
