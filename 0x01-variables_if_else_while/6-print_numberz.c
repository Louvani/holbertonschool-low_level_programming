#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry ponit
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
	int n;

	n = 0;

	for (n = '0' ; n <= '9' ; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
