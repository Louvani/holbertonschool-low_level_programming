#include "holberton.h"

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: number in base 10
 * @index: position
 * Return: bit at a given index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63) /*unsigned int only have 64 bits starting from 0*/
		return (-1);
	if ((n & 1 << index) > 0)
		return (1);
	else
		return (0);
}
