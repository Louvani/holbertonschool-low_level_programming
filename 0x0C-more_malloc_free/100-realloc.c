#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

char *_memcpy(char *dest, char *src, unsigned int n);
/**
 * _realloc - reallocs memory
 * @ptr: pointer to to be reallocated
 * @old_size: size of ptr
 * @new_size: new size to be allocated
 * Return: new ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newPtr = NULL;

	if (ptr && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	if (!ptr)
		return (malloc(new_size));
	newPtr = (void *)malloc(new_size);
	if (!newPtr)
		return (NULL);
	free(ptr);
	return (_memcpy(newPtr, ptr, old_size));

}
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
