#include "holberton.h"

/**
 *puts2 - function that prints every other character of a string
 *@str: String
 */

void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str += 2;
	}
	_putchar(10);
}
