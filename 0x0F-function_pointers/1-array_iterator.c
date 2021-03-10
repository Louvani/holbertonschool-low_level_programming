#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function given on each element of an array.
 * @array:A variable of an array
 * @size:size of the array
 * @action:pointer to a function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	unsigned int i = 0;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
