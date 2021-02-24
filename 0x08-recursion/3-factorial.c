#include "holberton.h"

/**
 * factorial - function that returns the length of a string.
 * @n: number
 * Return: if n is lower than 0, return -1 to indicate an error.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
