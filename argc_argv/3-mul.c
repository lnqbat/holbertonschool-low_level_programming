#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 *
 * @argc: count
 * @argv: string
 *
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
	int total;

	if (argc == 3)
	{
		total = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", total);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
