#include "main.h"

/**
 * str_concat - concatenates two strings
 *
 * @s1: First string
 * @s2: Second string
 *
 * Return: Result s1 et s2
 */

char *str_concat(char *s1, char *s2)
{
	char *result;
	int len1 = 0;
	int len2 = 0;
	int i;
	int j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
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
