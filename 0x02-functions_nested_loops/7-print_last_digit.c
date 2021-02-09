#include "holberton.h"

/**
**print_last_digit - Entry point
*@a: the the number of the check
*
* Return: 1 if number is positiv; 0 if is negativo
*/

int print_last_digit(int a)
{
	a = a % 10;

	if (a < 0)
	{
		a = -a;
	}
	_putchar(a + '0');
	return (a);
}
