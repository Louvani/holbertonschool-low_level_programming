#include "holberton.h"

int get(int n, int i);
/**
 * is_prime_number - function that returns 1 if the input is a prime number.
 * @n: number
 * Return: 1 if is prime number, 0 if not
 */

int is_prime_number(int n)
{
	int prime;

	if (n < 2)
	{
		return (0);
	}

	prime = get(n, n / 2);

	return (prime);
}
/**
 * get - prime number.
 * @n: number
 * @i: variable
 * Return: 1 if is prime number, 0 if not
 */

int get(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (get(n, i - 1));
}
