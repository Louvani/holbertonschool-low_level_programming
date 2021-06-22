#include "holberton.h"

/**
*jack_bauer - Entry point
*
* Return: 1 if number is positiv; 0 if is negativo
*/

void jack_bauer(void)
{
	/* int hour = 0, minute = 0;*/
	int i;
	int j;
	int k;

	i = 0;
	while (i < 24)
	{
		for (j = 0 ; j < 6 ; j++)
		{
			for (k = 0 ; k < 10 ; k++)
			{
				if (i < 10)
				{
					_putchar(48);
					_putchar(i + 48);
				}
				else
				{
					_putchar((i / 10) + 48);
					_putchar((i % 10) + 48);
				}
				_putchar(':');
				_putchar(j + '0');
				_putchar(k + '0');
				_putchar('\n');
			}
		}
	i++;
	}
}
