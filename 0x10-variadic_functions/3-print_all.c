#include "variadic_functions.h"
#include <stdarg.h>

void print_char(va_list c);
void print_integer(va_list i);
void print_float(va_list f);
void print_string(va_list s);

/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: string to separete words.
 * @n: number of arguments pased.
 */
void print_all(const char * const format, ...)
{
	fun frmts[] = {
		{"c", print_char},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
    };
	int i = 0;
	int j = 0;
	va_list list;
	va_start(list, format);

	while (format[i] != '\0')
	{
		while (frmts[j].str != NULL)
		{
			if (*(format + i) == frmts[j].str[0])
				frmts[j].f(list);
			j++;
		}
		i++;
	}
	va_end(list);
}

/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: string to separete words.
 * @n: number of arguments pased.
 */
void print_char(va_list c)
{
	printf("%c", va_arg(c, int));
}
/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: string to separete words.
 * @n: number of arguments pased.
 */
void print_integer(va_list i)
{
	printf("%d", va_arg(i, int));
}
/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: string to separete words.
 * @n: number of arguments pased.
 */
void print_float(va_list f)
{
	printf("%f", va_arg(f, double));
}
/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: string to separete words.
 * @n: number of arguments pased.
 */
void print_string(va_list s)
{
	printf("%s", va_arg(s, char *));
}
