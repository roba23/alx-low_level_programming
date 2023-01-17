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
	 int len1, len2, i;

	len1 = (int)strlen(name);
	len2 = (int)strlen(owner);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * len1);
	if (dog->name == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		dog->name[i] = name[i];
	dog->name = name;
	dog->age = age;
	dog->owner = malloc(sizeof(char) * len2);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < len2; i++)
		dog->owner[i] = owner[i];

	return (dog);
}
