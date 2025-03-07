#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 *
 * @argc: arg count
 * @argv: string arg
 *
 * Return: Always 0 if is succes .
 */

int main(int argc, char **argv)
{
	int numb1, numb2;
	int total = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (numb1 = 1 ; numb1 < argc ; numb1++)
	{
		for (numb2 = 0 ; argv[numb1][numb2] != '\0' ; numb2++)
		{
			if (argv[numb1][numb2] < 48 || argv[numb1][numb2] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}

		total += atoi(argv[numb1]);
	}

	printf("%d\n", total);

	return (0);
}
