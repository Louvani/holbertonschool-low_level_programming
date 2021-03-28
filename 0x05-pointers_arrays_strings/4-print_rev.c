#include "holberton.h"

/**
 *print_rev - Functión that prints a string, in reverse
 *@s: Variable that keeps the string
 */

void print_rev(char *s)
{
	int lenght; /*of the string*/
	int i;

	lenght = 0;
	/*Calaculate the lenght and punt the pointer in the last position*/
	while (*s != '\0')
	{
		lenght++;
		s++;
	}
	lenght -= 1;
	/*print each character while pointer comes back*/
	for (i = lenght; i >= 0; --i)
	{
		--s;
		_putchar(*s);
	}
	_putchar(10);
}
