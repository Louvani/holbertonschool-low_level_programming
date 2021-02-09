#include "holberton.h"

/**
* _isalpha - Entry point
*@c: the the number of the check
*
* Return: 1 if number is positive; 0 if is negative
*/

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
