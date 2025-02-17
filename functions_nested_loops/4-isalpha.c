#include "main.h"

/**
 * _isalpha - check the code for lower or upper character.
 *
 * @c: Is the chracter checked
 *
 * Return: 0 or 1 .
 */

int _isalpha(int c)

{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
