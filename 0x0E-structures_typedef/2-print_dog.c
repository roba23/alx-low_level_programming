#include "dog.h"
#include <stdio.h>
/**
 * print_dog - print dogs information if available
 * @d: pointer to a structure
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(1);
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	if (d->age == 0)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
