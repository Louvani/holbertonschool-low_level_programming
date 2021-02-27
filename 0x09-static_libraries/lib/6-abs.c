#include "holberton.h"

/**
*_abs - Entry point
*@i: the the number of the check
*
* Return: 1 if number is positiv; 0 if is negativo
*/

int _abs(int n)
{
	if (n < 0)
	{
		n = -1 * n;
	}
	return (n);
}
