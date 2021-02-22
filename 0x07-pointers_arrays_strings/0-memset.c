#include "holberton.h"

/**
 * *_memset
 * @s: variable
 * @b: variable
 * @n: variable
 * Return: always s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n > 0)
	{
		*p = (unsigned char) b;
		p++;
		n--;
	}
	return (s);	
}