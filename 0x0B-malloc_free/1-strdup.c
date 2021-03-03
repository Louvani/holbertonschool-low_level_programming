#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: Char.
 */

char *_strdup(char *str)
{
	char *a, *aux;
	int l;

	if (str == NULL)
	{
		return (NULL);
	}

	l = 0;
	while (str[l] != '\0')
	{
		l++;
	}

	a = malloc(sizeof(str) * (l + 1));

	if (a == NULL)
	{
		return (NULL);
	}

	aux = a;

	while (*str != '\0')
	{
		*aux = *str;
		aux++;
		str++;
	}
	*aux = '\0';

	return (a);
}
