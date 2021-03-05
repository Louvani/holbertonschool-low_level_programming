#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers.
 * @min: min number of a range
 * @max: max number of a range
 *
 * Return: array.
 */
int *array_range(int min, int max)
{
	int *ptr, minaux = min;
	int i, len = 0;

	if (min > max)
	{
		return (NULL);
	}

	while (minaux <= max)
	{
		len++;
		minaux++;
	}

	ptr = malloc(sizeof(int) * len);
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		ptr[i] = min++;
	}
	return (ptr);
}
