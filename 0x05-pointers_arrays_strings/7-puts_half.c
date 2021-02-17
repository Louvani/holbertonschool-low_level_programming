#include "holberton.h"

/**
 *puts_half - function that prints every other character of a string
 *@str: String
 */

void puts_half(char *str)
{
	int l;
	char *strAux = str;
	int startingPoint;

	l = 0;

	while (*strAux++)
	{
		l++;
	}
	
	if (l % 2 == 0)
	{
		startingPoint = l / 2;
	}
	else 
	{
		startingPoint = (l - 1) / 2;
	}

	char *copyStr = str + startingPoint;

	while (*copyStr)
	{
		_putchar(*copyStr++);
	}
	_putchar(10);
}
