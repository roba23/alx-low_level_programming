#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - check if the space is succefully allocated
 * @b: the size to be allocated
 * Return: return 0 if succesfull and 98 if unsuccesfull
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
