#include "holberton.h"
/**
 * print_square - Entry point
 * @size: variable
 */

void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			_putchar('#');
		}
	_putchar(10);
	}
	if (i <= 0)
	{
		_putchar(10);
	}
}
