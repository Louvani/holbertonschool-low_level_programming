#include "holberton.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index.
 * @n:number in base 10
 * @index: position
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63) /*unsigned int only have 64 bits starting from 0*/
		return (-1);
	*n = *n | 1 << index;
	return (1);
}
