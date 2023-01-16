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
	 dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc((strlen(name) + 1) * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc((strlen(owner) + 1) * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->owner);
		free(dog);

		return (NULL);
	}
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
	return (dog);
}
