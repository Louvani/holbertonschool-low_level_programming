#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: 2 dimensional grid
 * @height: size of height
 * Return: duoble pointer (ptr)
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}

	for (i = 0; i < height; i++)
	{
		if (*(grid + i) != NULL)
		{
			free(*(grid + i));
		}
	}
	free(grid);
}
