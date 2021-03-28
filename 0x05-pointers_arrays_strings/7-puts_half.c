#include "holberton.h"

/**
 *puts_half - function that prints every other character of a string
 *@str: String
 */

void puts_half(char *str)
{
	int l = 0;
	char *strAux = str;
	int startingPoint; /*half of the string*/

	/*get the lengt of the string*/
	while (*strAux)
	{
		l++;
		strAux++;
	}
	/*check if string is odd*/
	if (l % 2 == 0)
		startingPoint = l / 2;
	else
		startingPoint = (l + 1) / 2;
	/*reset aux to start at the middle of the string*/
	strAux = str + startingPoint;
	while (*strAux)
	{
		_putchar(*strAux);
		strAux++;
	}
	_putchar(10);
}
