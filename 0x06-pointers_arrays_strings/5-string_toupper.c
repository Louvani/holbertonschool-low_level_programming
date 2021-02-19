#include "holberton.h"

unsigned int myStrlen(char *p);

/**
 * *string_toupper - check the code for Holberton School students.
 *@c: Valrable
 * Return: Always char.
 */

char *string_toupper(char *c)
{
	int count = 0;

	while (c[count] != '\0')
	{
		if (c[count] >= 'a' && c[count] <= 'z')
		{
			c[count] = c[count] - 32;
		}
		count++;
	}
	return (c);
}
