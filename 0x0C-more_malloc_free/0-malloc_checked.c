#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - check if the space is succefully allocated
 * @b: the size to be allocated
 * Return: return 0 if succesfull and 98 if unsuccesfull
 */
void *malloc_checked(int b)
{
	if (malloc(b) == NULL)	
		exit (98);
	return (malloc(b));
}
