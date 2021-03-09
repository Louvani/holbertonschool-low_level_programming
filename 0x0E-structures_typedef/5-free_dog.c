#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dogs
 * @d: my dog
 * Return: pointer (d)
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	if (d != NULL)
			free(d);
}
