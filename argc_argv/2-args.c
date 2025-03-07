#include <stdio.h>

/**
 * main - prints all arguments
 *
 * @argc: No used
 * @argv: string
 *
 * Return: Always 0.
 *
 */

int main(__attribute__((unused))int argc, char **argv)
{
	int i = 0;

	while (argv[i])
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}

