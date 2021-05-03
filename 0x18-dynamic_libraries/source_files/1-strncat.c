#include "holberton.h"

/**
 * *_strncat - function that concatenates two strings.
 * @dest: first string.
 * @src: second string.
 * @n: number of bytes
 * Return: pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = _strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	return (dest);
}
