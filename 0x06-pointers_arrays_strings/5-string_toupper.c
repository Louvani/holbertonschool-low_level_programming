#include "holberton.h"

unsigned int myStrlen(char *p);

/**
 * *string_toupper - check the code for Holberton School students.
 *@c: Valrable
 * Return: Always char.
 */
char *string_toupper(char *c)
{
	char count = *c;

	while (*c != 0)
	{
		if (count >= 'a' && count <= 'z')
		{
			*c = *c - 32;
		}
		c++;
	}
	return (c);
}
