#include "holberton.h"

/**
 *print_rev - Functión that prints a string, in reverse
 *@s: Variable that keeps the string
 */
void print_rev(char *s)
{
	int l;
	int m;

	l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	for (m = l; m >= 0; --m)
	{
		_putchar(*s);
		--s;
	}
	_putchar(10);
}
