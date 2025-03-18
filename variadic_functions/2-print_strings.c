#include "variadic_functions.h"

/**
 * print_strings - print string
 *
 * @separator: separator
 * @n: arguments
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;
	char *str;

	if (separator == NULL)
		separator = "";

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(arg, char *);

		if (str == NULL)
			printf("(nil)");

		else if (str != NULL)
			printf("%s", str);

		if (i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arg);
}
