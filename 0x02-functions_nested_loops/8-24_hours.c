#include "holberton.h"

/**
*jack_bauer - Entry point
*
* Return: 1 if number is positiv; 0 if is negativo
*/

void jack_bauer(void)
{
	int i;
	int j;
	int k;
	int l;

	i = 0;
	j = 0;
	while (i < 3)
	{
		while (j < 10)
		{
			for (k = 0 ; k < 6 ; k++)
			{
				for (l = 0 ; l < 10 ; l++)
				{
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar(':');
					_putchar(k + '0');
					_putchar(l + '0');
					_putchar('\n');
				}
			}
		j++;
		}
	j = 0;
	i++;
	}
}
