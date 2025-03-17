#include "function_pointers.h"

/**
 * print_name - prints name
 *
 * @name: pointer char
 * @f: pointer func
 *
 */

void print_name(char *name, void (*f)(char *))

{
	if (name == NULL)
	{
		exit(-1);
	}
	f(name);
}
