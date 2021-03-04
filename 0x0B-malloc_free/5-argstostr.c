#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>

/**
 *  *argstostr - prints the number of arguments passed into it.
 * @ac:Counter of arguments
 * @av: arguments
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	int i;

	for (i = 0; i < ac; i++)
	{
		printf("%s\n", av[i]);
	}
	return (av[0]);
}
