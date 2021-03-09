#include "dog.h"
#include <stdio.h>
/**
 * print_dog - function that prints a struct dog.
 * @d: adrres of my_dog
 * Return: Always 0.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");
		printf("Name: %f\n", d->age);
		if (d->owner != NULL)
			printf("Name: %s\n", d->owner);
		else
			printf("Name: (nil)\n");
	}
	else
			return;
}
