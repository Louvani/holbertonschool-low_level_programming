#include "holberton.h"

/**
 * _strlen - returns the length of a string
 *@s: variable with the string
 *
 * Return: always l.
 */
int _strlen(char *s)
{
	int l;

	l = 0;
	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}
