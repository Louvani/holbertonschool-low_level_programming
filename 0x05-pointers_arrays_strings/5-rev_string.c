#include "holberton.h"

/**
 *rev_string - Functión that prints a string, in reverse
 *@s: Variable
 */

void rev_string(char *s)
{
	int lenght; /*of the string*/
	char aux[1024];
	int i = 0;

	lenght = 0;
	/*Calaculate the lenght and and copy string in array aux*/
	while (s[lenght] != '\0')
	{
		aux[lenght] = s[lenght];
		lenght++;
	}
	lenght -= 1;
	/*overwrite s from lastt position with aux that is in first position*/
	for (; lenght >= 0; --lenght)
	{
		s[lenght] = aux[i];
		i++;
	}
}
