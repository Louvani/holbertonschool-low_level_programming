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

	a = malloc(sizeof(c) * size);
	return (a);
}
