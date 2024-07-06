#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a structure that holds data about the dog owner.
 * @name: the name of the dog.
 * @age: the age of the dog.
 * @owner: the name of the owner.
 *
 * Description: a struct that holds the data of the dog and its owner.
 */
typedef struct
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
