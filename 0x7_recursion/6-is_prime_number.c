#include "main.h"

/**
 * prime_number - uses recursion to check for primality
 *
 * @numb:The number being checked for primality
 * @x:The divisor being checked
 *
 * Return: 1 if prime, 0 if not prime
 */

int prime_number(int numb, int x)

{
	if (numb == x)
	{
		return (1);
	}
	else if (numb % x == 0)
	{
		return (0);
	}
	else
	{
		return (prime_number(numb, x + 1));
	}
}

/**
 * is_prime_number - checks if a number is prime
 *
 * @n: The number to check
 *
 * Return: 1 if prime, 0 if not prime.
 */

int is_prime_number(int n)

{
	if (n <= 1)
	{
		return (0);
	}

	return (prime_number(n, 2));
}
