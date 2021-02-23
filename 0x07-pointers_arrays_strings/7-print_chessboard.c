#include "holberton.h"

/**
 * *print_chessboard -  function that locates a substring.
 * @a: String
 * Return:  the num of bytes in the initial segment of s.
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
