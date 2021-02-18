#include "holberton.h"

/**
 * *_strncpy - functión that copies a string.
 * @dest: an array?
 * @src: a string.
 * @n: number of bytes.
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}