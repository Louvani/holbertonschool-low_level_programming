#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
#include <ctype.h>

int change(int cent, int *coin);

/**
 * main - prints the minimum num of coins to make change for an amount of money
 * @argc:Counter of arguments
 * @argv: arguments
 * Return: 0 if have more than 1 arguments.
 */
int main(int argc, char *argv[])
{
	int coin[5] = {25, 10, 5, 2, 1};
	int i, cent, result;

	if (argc == 1)
	{
		printf("Error\n");
		return (0);
	}
	for (i = 0; i < argc; i++)
	{
		cent = atoi(argv[i]);
		if (atoi(argv[i]) < 0)
		{
			printf("0\n");
			return (0);
		}
		result = change(cent, coin);
	}
	printf("%d\n", result);
	return (0);
}

/**
 * change - change for an amount of money
 * @cent: Cents recived
 * @coin: coins
 * Return: value of moneys.
 */
int change(int cent, int *coin)
{
	if ((cent % *coin) == 0)
	{
		return (cent / *coin);
	}
	return ((cent / *coin) + (change((cent % *coin), (coin + 1))));
}
