#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - main function only
 *
 * @argc: numbers argument
 * @argv: an array of pointer to the argument
 *
 * Return: Always 0 .
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];

	if (get_op_func(operator) == NULL)
	{
		printf("Error\n");
		return (99);
	}
	if ((*operator == '/' && num2 == 0) || (*operator == '%' && num2 == 0))
	{
		printf("Error\n");
		return (100);
	}

	printf("%d\n", get_op_func(operator)(num1, num2));

	return (0);
}
