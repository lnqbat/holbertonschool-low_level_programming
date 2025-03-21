#ifndef VAR_H
#define VAR_H

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct format_type - struct format_type
 *
 * @type: the format
 * @f: function associated
 *
 */
typedef struct type
{
	char type;
	void (*f)(va_list *args);

} type_t;

#endif
