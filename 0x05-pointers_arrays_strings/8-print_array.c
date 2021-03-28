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
	if (n == -1)
		return;

	while (i < n - 1 && a != NULL)
	{
		printf("%d, ", a[i]);
		i++;
	}
	printf("%d\n", a[i]);
}
