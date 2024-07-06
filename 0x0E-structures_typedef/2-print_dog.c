#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - a function that prints a struct dog.
 * @d: a pointer to a struct dog.
 *
 * Return: void.
 */
void print_dog(struct dog *d)
{
	char *nil;
	char *name;
	char *owner;

	nil = "(nil)";
	if (d == NULL)
	{
	}
	else
	{
		name = d->name;
		owner = d->owner;
		if (d->name == NULL)
		{
			name = nil;
		}
		if (d->owner == NULL)
		{
			owner = nil;
		}
		printf("Name: %s\n", name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", owner);
	}
}
