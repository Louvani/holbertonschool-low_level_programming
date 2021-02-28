#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
#include <limits.h>
#include <errno.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc:Counter of arguments
 * @argv: arguments
 * Return: 0 if have more than 1 arguments.
 */

int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc == 2)
	{
		printf("Error\n");
		return (1);
	}

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			mul = mul * atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	return (0);
}
