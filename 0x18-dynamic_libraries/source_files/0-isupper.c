#include "holberton.h"

/**
 *_isupper - Entry point
 *@c: Variables char
 * Return: 1 is is uppercase and 0 if is lowercase
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
