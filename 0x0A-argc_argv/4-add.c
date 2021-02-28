#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
#include <ctype.h>

int _isdigit(int c);

/**
 * main - prints the number of arguments passed into it.
 * @argc:Counter of arguments
 * @argv: arguments
 * Return: 0 if have more than 1 arguments.
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (!isdigit(*argv[i]))
			{
				printf("Error\n");
				return (0);
			}
			else
			{
				sum = sum + atoi(argv[i]);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
