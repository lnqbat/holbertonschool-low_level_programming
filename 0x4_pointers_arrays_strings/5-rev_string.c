#include "main.h"
#include "2-strlen.c"

/**
 * rev_string - reverse the string
 *
 * @s: string
 */

void rev_string(char *s)

{
	int letter = 0;
	int rev = _strlen(s) - 1;
	char temp;

	while (letter < rev)
	{
		temp = s[letter];
		s[letter] = s[rev];
		s[rev] = temp;

		letter++;
		rev--;
	}
}

