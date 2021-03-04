#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - function that allocates memory using malloc.
 * @b: variable
 * Return: Always 0.
 */

void *malloc_checked(unsigned int b)
{
	void *c;

	c = (void *)malloc(b);
	if (c == NULL)
	{
		exit(98);
	}
	return (c);
}
