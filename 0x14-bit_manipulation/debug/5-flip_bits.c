#include "holberton.h"

/**
 * flip_bits - returns num of bits needed to flip to get from one
 * number to another.
 * @n: first number to convert
 * @m: second number
 * Return: number of bits to set
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int aux; /*keep xor of n and m*/
	int counter_of_difference = 0; /*count the number of diference*/

	aux = (n ^ m); /*the result will be compauxre with aux-1*/

	while (aux > 0)
	{
		counter_of_difference++;
		aux &= (aux - 1);
	}
	return (counter_of_difference);
}
