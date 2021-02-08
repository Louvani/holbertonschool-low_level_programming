#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry ponit
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0 ; k < 10 ; k++)
			{
				if (i != j && j != k && i < j && j < k)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');

					if ((i * 10) + j < 89)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
