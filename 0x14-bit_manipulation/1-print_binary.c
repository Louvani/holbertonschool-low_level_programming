#include "holberton.h"
/**
 * print_binary -  prints the binary representation of a number.
 * @n:is number to convert and print.
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		return;
	}
	print_binary(n >> 1);
	_putchar((n & 1) + 48);
}
