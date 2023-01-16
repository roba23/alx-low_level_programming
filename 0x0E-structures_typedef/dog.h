#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog structure with variables name,age and owner
 * @name: name of dog
 * @age: age
 * @owner: name of pwner
 *
 * Description: this struct take attributes of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif

