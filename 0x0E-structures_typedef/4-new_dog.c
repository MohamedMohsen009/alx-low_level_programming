#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - a function that creates a new dog.
 * @name: the name of the dog.
 * @age: the age of the dog.
 * @owner: the name of the owner.
 *
 * Return: a pointer to a new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	char *n;
	char *o;

	new = malloc(sizeof(struct dog));
	if (new == NULL)
	{
		return(NULL);
	}
	n = malloc(strlen(name) + 1);
	if (n == NULL)
	{
		return (NULL);
	}
	strcpy(n, name);
	o = malloc(strlen(owner) + 1);
	if (o == NULL)
	{
		return (NULL);
	}
	strcpy(o, owner);
	new->name = n;
	new->age = age;
	new->owner = o;
	return (new);
}
