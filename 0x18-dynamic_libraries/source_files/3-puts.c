#include "holberton.h"

/**
 * _puts - function that prints a string
 *@str: String
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar(10);
}
