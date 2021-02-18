#include "holberton.h"

#define ZERO '0'
#define NEW_LINE 10

int getNumberOfDigit(int n);
int power(int x, int y);
unsigned int absolute(int n);


/**
 *print_number - function that prints an integer
 *getNumberOfDigit - Give us the number of digits in one number
 *power - give us the most near power of n.
 *absolute - give us the absolute number if it is negative.
 *@n: bring the value from main
 */

void print_number(int n)
{
	int digitNumber = getNumberOfDigit(n);
	int divider = power(10, digitNumber - 1);

	if (n < 0)
	{
		_putchar('-');
	}

	unsigned int abs_n = absolute(n);

	do {
		int currentDigit = abs_n / divider;

		_putchar(currentDigit + ZERO);
		abs_n = abs_n % divider;
		divider = divider / 10;
	} while (divider != 0);
}

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

int power(int x, int y)
{
	int power = x;
	int i;

	if (y == 0)
	{
		return (1);
	}

	for (i = y; i > 1; i--)
	{
		power = power * x;
	}
	return (power);
}

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
