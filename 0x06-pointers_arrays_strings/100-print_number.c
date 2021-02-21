#include "holberton.h"

int getNumberOfDigit(int n);
int power(int x, int y);
unsigned int absolute(int n);

/**
 *print_number - function that prints an integer
 *@n: bring the value from main
 */

void print_number(int n)
{
	int digitNumber = getNumberOfDigit(n);
	int divider = power(10, digitNumber - 1);
	unsigned int abs_n = absolute(n);
	int currentDigit = abs_n / divider;

	if (n < 0)
	{
		_putchar('-');
	}

	do {
		_putchar(currentDigit + 48);
		abs_n = abs_n % divider;
		divider = divider / 10;
	} while (divider != 0);
}

/**
 *getNumberOfDigit - Give us the number of digits in one number
 *@n: bring the value from print_number
 *Return: The number of Digits.
 */

int getNumberOfDigit(int n)
{
	int nAux = n;
	int numDigits = 0;

	do {
		numDigits++;
		nAux /= 10;
	} while (nAux != 0);
	return (numDigits);
}

/**
 *power - give us the most near power of n.
 *@x: always 10
 *@y: digitNumber - 1
 *Return: power of the digits
 */

int power(int x, int y)
{
	int p = x;
	int i;

	if (y == 0)
	{
		return (1);
	}

	for (i = y; i > 1; i--)
	{
		p = p * x;
	}
	return (p);
}

/**
 *absolute - give us the absolute number if it is negative.
 *@n: bring the value from print_number
 *Return: An absolute number.
 */

unsigned int absolute(int n)
{
	unsigned int result;

	if (n < 0)
	{
		result = ((unsigned int)(n)) * -1;
	}
	else
	{
		result = ((unsigned int)(n));
	}
	return (result);
}