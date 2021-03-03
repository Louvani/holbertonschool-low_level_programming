#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

unsigned int myStrlen(char *p);

/**
 * *str_concat - returns a pointer to a newly allocated space in memory
 * @s1: string 1
 * @s2: string 2
 * Return: Char.
 */
char *str_concat(char *s1, char *s2)
{
	int str1, str2, i, j;
	char *a;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	str1 = myStrlen(s1);
	str2 = myStrlen(s2);

	a = malloc(sizeof(char) * (str1 + str2 + 1));

	for (i = 0; *(s1 + i) != '\0'; i++)
	{
		*(a + i) = *(s1 + i);
	}
	for (j = 0; *(s2 + j) != '\0'; j++)
	{
		*(a + i + j) = *(s2 + j);
	}
	*(a + i + j) = '\0';
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
