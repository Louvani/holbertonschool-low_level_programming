#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
#include <ctype.h>

int _digit(char *c);

/**
 * main - add numbers recived as arguments
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
			if (_digit(argv[i]))
			{
				sum = sum + atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}

		}
		printf("%d\n", sum);
	}
	return (0);
}
/**
 * _isdigit - Entry point
 * @c: Variable
 * Return: 1 is is digit and 0 if is otherwise
 */

int _digit(char *c)
{
	int i =0;

	while (c[i] != '\0')
	{
		if (isdigit(c[i]))
		{
			continue;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
