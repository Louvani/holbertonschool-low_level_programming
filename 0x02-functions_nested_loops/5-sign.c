#include "holberton.h"
/**
*print_sign - Entry point
*@n: the the number of the check
*
* Return: 1 if number is positiv; 0 if is negativo
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
