#include "variadic_functions.h"
#include <stdarg.h>

void print_char(va_list c);
void print_integer(va_list i);
void print_float(va_list f);
void print_string(va_list s);

/**
 * print_all - function that prints strings, followed by a new line.
 * @format:_constante
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
	char *separator = "";
	va_list list;

	va_start(list, format);

	while (format[i] != '\0')
	{
		j = 0;
		/*loop to compare format with frmt*/
		while (frmts[j].str != NULL)
		{
			if (*(format + i) == frmts[j].str[0])
			{
				printf("%s", separator); /*way avoid print separator at the end*/
				frmts[j].f(list);
				separator = ", ";
			}
			j++;
		}

		i++;
	}
	printf("\n");
	va_end(list);
}

/**
 * print_char - function that prints characters
 * @c: character
 */
void print_char(va_list c)
{
	printf("%c", va_arg(c, int));
}
/**
 * print_integer - function that prints numbers.
 * @i: integer
 */
void print_integer(va_list i)
{
	printf("%d", va_arg(i, int));
}
/**
 * print_float - function that prints floats
 * @f: float
 */
void print_float(va_list f)
{
	printf("%f", va_arg(f, double));
}
/**
 * print_string - function that prints strings
 * @s: string
 */
void print_string(va_list s)
{
	char *a; /*variable to keep value of s*/

	a = va_arg(s, char *);
	/*
	*if function recives a NULL change a for (nil)
	*/
	if (a == NULL)
		a = "(nil)";
	printf("%s", a);
}
