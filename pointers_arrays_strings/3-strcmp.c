#include "main.h"

/**
 * _strcmp - That compare twho stringis diff.
 *
 * @s1: first string
 * @s2: Second string
 *
 * Return: Difference on string 1 et 2 !
 *
 */

int _strcmp(char *s1, char *s2)

{
	int i = 0;

	while ((s1[i] != '\0' && s2[i] != '\0') && (s1[i] == s2[i]))
	{
		i++;
	}

	return (s1[i] - s2[i]);
}
