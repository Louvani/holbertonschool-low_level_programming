#include "holberton.h"

/**
 * _atoi - function that convert a string to an integer.
 * @s: string
 * Return: an integer.
 */
int _atoi(char *s)
{
	int number = 0;
	int i = 0, sign = 1;

	while (s[i])
	{
		if (s[i] == '-')
			sign = sign * (-1);
		if (s[i] >= 48 && s[i] <= 57)
		{
			number = number * 10 + s[i] - 48;

			if (s[i + 1] < 48 || s[i + 1] > 57)
			{
				number = sign * number;
				return (number);
			}
		}
		i++;
	}
	number = sign * number;
	return (number);
}
