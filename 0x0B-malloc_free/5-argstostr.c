#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
int _strlen(char *s);

/**
 *  *argstostr - prints the number of arguments passed into it.
 * @ac:Counter of arguments
 * @av: arguments
 * Return: a
 */

char *argstostr(int ac, char **av)
{
	int i, j, len = 0, k, l = 0;
	char *a;

	if (av == NULL || ac == 0)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		len += _strlen(av[i]) + 1;
	}
	a = malloc(len + 1);
	if (a == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < ac; j++)
	{
		for (k = 0; av[j][k] != '\0'; k++)
		{
			a[l] = av[j][k];
			l++;
		}
		a[l] = '\n';
		l++;
	}
	a[l + 1] = '\0';
	return (a);
}

/**
 * _strlen - returns the length of a string
 *@s: variable with the string
 *
 * Return: always l.
 */
int _strlen(char *s)
{
	int l;

	l = 0;
	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}
