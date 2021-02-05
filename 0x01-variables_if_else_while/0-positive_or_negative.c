#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry ponit
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
