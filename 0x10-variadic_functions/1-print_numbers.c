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
	/*If separator is NULL, don’t print it*/
	if (separator == NULL)
		return;
	/*
	*loop to loop through arguments and insert arguments with separator
	*/
	while (i < n)
	{
		printf("%d", va_arg(numbers, int));
		printf("%s", separator);
		i++;
	}
	printf("\n");

	va_end(numbers); /*End the call of the arguments*/
}
