#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 *
 * @s1: first string
 * @s2: Second string
 * @n: octect charac
 *
 * Return: concatenates two strings s1 and s2.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)

{
	char *result;
	unsigned int len1 = 0, len2 = 0, i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0' && len2 < n)
		len2++;

	result = malloc(sizeof(char) * (len1 + len2 + 1));

	if (result == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		result[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		result[i + j] = s2[j];
	}
	result[len1 + len2] = '\0';

	return (result);
}

