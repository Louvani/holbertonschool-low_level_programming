#include "holberton.h"
#include <stdlib.h>

/**
 * *create_array - will create an arry using malloc
 * @size: the size for the array
 * @c: charcater to initialize
 * Return: variable a
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i = 0;

	a = malloc(sizeof(c) * size);
	if (size == 0)
	{
		return (NULL);
	}

	while (i < size)
	{
		a[i] = c;
		i++;
	}
	if (a == '\0')
	{
		return (NULL);
	}
	return (a);
}
