#include "holberton.h"
/**
 *print_diagonal - Entry point
 *@n: variable
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	}
	else
	{
		_putchar('\n');
	}
}
