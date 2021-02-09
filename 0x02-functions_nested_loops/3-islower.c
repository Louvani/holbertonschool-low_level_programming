#include "holberton.h"

/**
* _islower - Entry point
*@c: the the number of the check
*
* Return: 1 if number is positiv; 0 if is negativo
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
