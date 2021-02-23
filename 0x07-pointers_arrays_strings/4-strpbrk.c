#include "holberton.h"

/**
 * *_strpbrk - function that gets the length of a prefix substring
 * @s: String
 * @accept: second string
 * Return:  the num of bytes in the initial segment of s.
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p = s;

	for (j = 0; p[j] != '\0'; j++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (p[j] == accept[i])
			{
				return (p + j);
			}
		}

	}
	return (0);
}
