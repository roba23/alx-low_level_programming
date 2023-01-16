#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - creates new dog
 * @name: name of dog
 * @age: age
 * @owner: owner of dog
 * Return: dog_t pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	 dog_t *doggy;

	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);
	doggy->name = malloc((strlen(name) + 1) * sizeof(char));
	if (doggy->name == NULL)
	{
		free(doggy);
		return (NULL);
	}
	doggy->owner = malloc((strlen(owner) + 1) * sizeof(char));
	if (doggy->owner == NULL)
	{
		free(doggy->owner);
		free(doggy);

		return (NULL);
	}
	doggy->name = name;
	doggy->age = age;
	doggy->owner = owner;
	return (doggy);
}
