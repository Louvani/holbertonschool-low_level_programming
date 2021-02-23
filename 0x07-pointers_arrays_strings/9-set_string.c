#include "holberton.h"

/**
 * set_string - function that sets the value of a pointer to a char
 * @s: Array
 * @size: size of the array
 * Return:  the num of bytes in the initial segment of s.
 */
void set_string(char **s, char *to)
{
	*s = to;
}