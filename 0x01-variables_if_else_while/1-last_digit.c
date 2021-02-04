#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry ponit
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	int n, l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;

	if (l > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, l);
	}
	else if (n % 10 == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, l);
	}
	else
	{
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, l);
	}
	return (0);
}
