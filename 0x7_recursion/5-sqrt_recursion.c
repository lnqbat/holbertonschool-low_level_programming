#include "main.h"

/**
 * support_sqrt - check the number n
 *
 * @numb: number squared
 * @root: base number
 *
 * Return: natural square root of number
 */

int support_sqrt(int numb, int root)
{
	if (root * root == numb)
	{
		return (root);
	}
	else if (root * root > numb)
	{
		return (-1);
	}
	else
		return (support_sqrt(numb, root + 1));
}

/**
 * _sqrt_recursion - the natural square root of a number
 *
 * @n: number
 *
 * Return: square
 */

int _sqrt_recursion(int n)
{
	return (support_sqrt(n, 1));
}
