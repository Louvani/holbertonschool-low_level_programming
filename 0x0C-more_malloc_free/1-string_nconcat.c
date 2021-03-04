#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
unsigned int myStrlen(char *p);

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: String 1
 * @s2: String 2
 * @n: number of bytes
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int strlen1, strlen2, j;
	int i;



	strlen1 = myStrlen(s1);
	strlen2 = myStrlen(s2);

	if (n >= strlen2)
	{
		a = malloc(strlen1 + strlen2 + 1);
		if (a == NULL)
		{
			return (NULL);
		}

		for (i = 0; *(s1 + i) != '\0'; i++)
		{
			*(a + i) = *(s1 + i);
		}
		for (j = 0; *(s2 + j) != '\0'; j++)
		{
			*(a + i + j) = *(s2 + j);
		}
	}
	else if (n < strlen2)
	{
		a = malloc(strlen1 + n + 1);
		if (a == NULL)
		{
			return (NULL);
		}
		for (i = 0; *(s1 + i) != '\0'; i++)
		{
			*(a + i) = *(s1 + i);
		}
		for (j = 0; j < n; j++)
		{
			*(a + i + j) = *(s2 + j);
		}
	}
	a[i + j] = '\0';
	return (a);
}
/**
 * myStrlen - function that concatenates two strings.
 * @p: variable to determine the dest lenght.
 * Return: always count.
 */

unsigned int myStrlen(char *p)
{
	unsigned int count = 0;

	while (*p != '\0')
	{
		count++;
		p++;
	}
	return (count);
}
