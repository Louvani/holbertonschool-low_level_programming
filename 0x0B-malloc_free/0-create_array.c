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

	if (size == 0)
	{
		return (NULL);
	}
	a = malloc(sizeof(c) * size);

	while (i < size)
	{
		a[i] = c;
		i++;
	}
	return (a);
}
