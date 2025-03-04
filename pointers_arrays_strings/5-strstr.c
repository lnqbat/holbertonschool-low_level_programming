#include "main.h"

/**
 * _strstr - locates a substring
 *
 * @haystack: The start string
 * @needle: The substring
 *
 * Return: Pointer to the first occurrence of needle in haystack
 *
 */

char *_strstr(char *haystack, char *needle)

{
	char *start;
	char *temp;

	while (*haystack)
	{
		start = haystack;
		temp = needle;

		while (*start && *temp && (*start == *temp))
		{
			start++;
			temp++;

		}
	if (*temp == '\0')

	return (haystack);

	haystack++;

	}
	return ('\0');
}
