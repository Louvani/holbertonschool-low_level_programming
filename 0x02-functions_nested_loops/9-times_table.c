#include "holberton.h"

/**
*times_table - Entry point
*
* Return: 1 if number is positiv; 0 if is negativo
*/

void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (k >= 10)
			{
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
			else if (k <= 10)
			{
				_putchar(k + '0');
			}
			
		}
	_putchar('\n');	
	}

}
