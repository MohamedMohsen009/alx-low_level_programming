#ifndef MAIN_HEADER_FILE
#define MAIN_HEADER_FILE
/**
 * struct dog - a structure that holds data about the dog owner.
 * @name: the name of the dog.
 * @age: the age of the dog.
 * @owner: the name of the owner.
 *
 * @Description: a struct that holds the data of the dog and its owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
