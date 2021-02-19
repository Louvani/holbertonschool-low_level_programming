#include "holberton.h"

/**
 * reverse_array - function that reverses the content of an array of integers..
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int tmp, i;

	for (n--, i = 0; i < n -1; i++, n--)
	{
		tmp = a[n];
		a[n] = a[i];
		a[i] = tmp;
	}

}