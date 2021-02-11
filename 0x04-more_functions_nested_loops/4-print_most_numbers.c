#include "holberton.h"
/**
 * print_most_numbers - Entry point
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + 48);
		}
	}
	_putchar(10);
}
