#include "holberton.h"
/**
 *print_triangle - Function to print a triangle
 *@size: variable that represent the size of the triangle
 */

void print_triangle(int size)
{
	if (size > 0)
	{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = size; j > 0; j--)
		{
			if (j > i + 1)
			{
				_putchar(' ');
			}
			else
			{
			_putchar(35);
			}
		}
		_putchar(10);
	}
	}
	else
	{
		_putchar(10);
	}
}
