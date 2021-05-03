#include "holberton.h"

/**
 * *_memcpy - function that copies memory area.
 * @dest: Memory area dest.
 * @src: Memory area source
 * @n: Number of bytes
 * Return: Always char *s
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *d = dest;
	char *s = src;

	for (i = 0; i < n; i++)
	{
		d[i] = s[i];
	}
	return (d);
}
