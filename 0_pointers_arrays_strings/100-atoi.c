#include "main.h"

/**
 * _atoi - that convert a string to an integer.
 *
 *
 */

int _atoi(char *s)

{
	int len;
	int num = 0;
	int sign = 0;

	for(len = 0; s[len] != '\0'; len++)
	{
		if (s[len] >= 48 && s[len] <= 57)
		{
			num = num * 10 + (s[len] - 48);
		}

	}
	return (num);
}
