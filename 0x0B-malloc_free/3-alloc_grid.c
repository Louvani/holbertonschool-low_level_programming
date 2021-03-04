#include "holberton.h"
#include <stdlib.h>

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: size of width
 * @height: size of height
 * Return: duoble pointer (ptr)
 */

int **alloc_grid(int width, int height)
{
	int **ptr;
	int i;
	int j;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}

	ptr = malloc(height * sizeof(int *));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		*(ptr + i) = malloc(width * sizeof(int));
		if (*(ptr) == NULL)
		{
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			*(*(ptr + i) + j) = 0;
		}
	}
	return (ptr);
}
