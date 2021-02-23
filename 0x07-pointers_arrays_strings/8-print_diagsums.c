#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix of integers
 * @a: Array
 * @size: size of the array
 * Return:  the num of bytes in the initial segment of s.
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int sum = 0;

	for (i = 0; a[i] < size; i++)
	{
		for (j = 0; a[j] < size; j++)
		{
			if (i == j)
			{
				sum = sum + *a;
			}
		}
	}
	printf("%d\n", sum);
}