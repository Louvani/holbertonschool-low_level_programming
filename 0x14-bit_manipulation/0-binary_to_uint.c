#include "holberton.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b:is pointing to a string of 0 and 1 chars
 * Return:converted number, or 0 if:
 * - there is one or more chars in the string b that is not 0 or 1
 * - b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int counter, i, j = 0;

	counter = _strlen(b);

	if (b == NULL)
		return (0);
	i = check_binary(b);
	if (i == 1)
	{
		while (b[j] != '\0')
		{
			if (b[j] == 49)
			{
				decimal = decimal + (1 << (counter - 1));
				counter--;
				j++;
			}
			else if (b[j] == 48)
			{
				decimal = decimal + 0;
				counter--;
				j++;
			}
		}
		return (decimal);
	}
	else
		return (0);

}
/**
 * check_binary - verify if the string contain 0 0r 1
 * @b: string
 * Return: 1 if is only 0/1 and 0 if contain other characters
 */
int check_binary(const char *b)
{
	while (*b != '\0')
	{
		if (*b == '0' || *b == '1')
		{
			b++;
		}
		else
			return (0);
	}
	return (1);
}
/**
 * _strlen - returns the length of a string
 *@s: variable with the string
 *
 * Return: always l.
 */
int _strlen(const char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}
