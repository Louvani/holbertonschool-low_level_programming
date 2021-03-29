#include "holberton.h"
#include <stdio.h>

/**
 * print_array - function that prints n elements of an array of INTEGERS.
 * @a: poiter to the array
 * @n: is the number of elements of the array to be printed
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n && a != NULL)
	{
		printf("%d", a[i]);
		if (i != n - 1) /*last number don't need ", " */
		printf(", ");
		i++;
	}
	printf("\n");
}
