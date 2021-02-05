#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry ponit
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
	char a;

	for (a = 'a' ; a <= 'z' ; a++)
	{
		if (a == 'q' || a == 'e')
		{
			a++;
		}
		putchar(a);
	}
	putchar('\n');
	return (0);
}
