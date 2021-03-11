#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: First number
 * Return: Variable result
 */

int sum_them_all(const unsigned int n, ...)
{
	int result = 0;
	/*
	*Variable to go through the number of arguments,
	*it must be unsigned to compare with n
	*/
	unsigned int i = 0;
	va_list args;

	va_start(args, n);
	/*
	*Cycles through the different numbers passed as arguments
	*while storing the sum in the result variable
	*/
	while (i < n)
	{
		result = result + va_arg(args, int);
		i++;
	}
	va_end(args); /*End the call of the arguments*/
	return (result);
}
