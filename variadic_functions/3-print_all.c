#include "variadic_functions.h"

/**
 * print_char - print char
 * @args: arguments list
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}
/**
 * print_int - print integer
 * @args: arguments list
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}
/**
 * print_float - print a float
 * @args: arguments list
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}
/**
 * print_string - print string
 * @args: arguments list
 */
void print_string(va_list args)
{
	char *str; 
	
	str = va_arg(args, char *);

	if (!str)
		str = "(nil)";

	printf("%s", str);
}
/**
 * print_all - Prints anything based on the format string
 *
 * @format: A format specifiers
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j;
	char *sep = "";
	
	type_t check[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while (check[j].type != '\0')
		{
			if (format[i] == check[j].type)
			{
				printf("%s", sep);
				check[j].f(args);
				sep = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
