#include "holberton.h"

/**
 * _strcmp - function that compares two strings
 * @s1: variable
 * @s2: variable
 * Return: 0 y 1
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			i = 1;
			break;
		}
		s1++;
		s2++;
	}
	if (i == 0)
		return (0);
	else
		return (*s1 - *s2);
}
