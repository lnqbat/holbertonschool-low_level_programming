#include "3-calc.h"

/**
 * get_op_func - match operator funct
 * @s: op str
 *
 * Return: 0 or null
 */

int (*get_op_func(char *s))(int, int)
{
	opt_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (*(ops[i].op) == *s && s[1] == '\0')
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
