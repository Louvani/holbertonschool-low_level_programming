#include "holberton.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: number
 * Return: natural square root
 */

int _sqrt_recursion(int n)
{
	int m;

	if (n < 0)
	{
		return (-1);
	}

	m = secondFunction(n, 1);
	return (m);

}
/**
 * secondFunction - function that returns the natural square root of a number.
 * @n: number
 * @a: number to test
 * Return: natural square root
 */
int secondFunction(int n, int a)
{

	if ((a * a) == n)
	{
		return (a);
	}
	if ((a * a) > n)
	{
		return (-1);
	}
	return (secondFunction(n, a + 1));
}
