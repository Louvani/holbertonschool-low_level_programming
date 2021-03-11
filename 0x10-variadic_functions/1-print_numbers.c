#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator: string to separete numbers.
 * @n: number of arguments pased.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	/*
	*Variable to go through the number of arguments,
	*it must be unsigned to compare with n
	*/
	unsigned int i = 0;

	va_start(numbers, n);
	/*
	*loop to loop through arguments and insert arguments with separator
	*/
	while (i < n)
	{
		if (i == (n - 1))
		{
			printf("%d", va_arg(numbers, int));
			printf("\n");
		}
		else
		{
			printf("%d", va_arg(numbers, int));
			if (separator != NULL) /*If separator is NULL, don’t print it*/
				printf("%s", separator);
		}
		i++;
	}
	va_end(numbers); /*End the call of the arguments*/
}
