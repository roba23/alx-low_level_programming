#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - a function to initialize elements of a struct
 * @d: struct to be initialized
 * @name: name of dog
 * @age: age of the dog
 * @owner: name of owner
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
