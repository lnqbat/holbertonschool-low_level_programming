#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - ....
*
* Return: always 0
*/

int main(void)
{
	int n;
	char letter;

	for (n = 0; n < 10; n++)
		putchar((n % 10) + '0');

	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
