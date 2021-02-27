#include "holberton.h"

/**
 *_isdigit - Entry point
 *@c: Variable
 * Return: 1 is is digit and 0 if is otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
