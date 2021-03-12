#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: string to separete words.
 * @n: number of arguments pased.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int i = 0;

	va_start(strings, n);
	/*
	*loop to loop through arguments and insert arguments with separator
	*/
	while (i < n)
	{
		str = va_arg(strings, char *);
		if (str == NULL)
			str = "(nill)";

		if (i <= (n - 1))
		{
			printf("%s", str);
		}
		if (i < (n - 1))
		{
			if (separator != NULL) /*If separator is NULL, don’t print it*/
				printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	va_end(strings); /*End the call of the arguments*/
}
