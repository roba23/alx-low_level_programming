#include <stdlib.h>
#include <stdio.h>
/**
 * _realloc- realloc a memory space using malloc
 * @old_size: previous size allocated
 * @new_size: new size to be allocated
 * @ptr :the pointer of the previous memory allocated
 * Return:pointer to the allocated space if succesfull 
 * return null if it fails
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *m;
	char *n;
	unsigned int i;
	unsigned int min;
	
	i = 0;
	m = ptr;
	if (old_size == new_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
		return (ptr);
	if (ptr == NULL)
	{
		n = malloc(new_size);
		return (n);
	}
	if (old_size > new_size)
		min = new_size;
	else 
		min = old_size;
	n = malloc(new_size);
	for (i = 0; i < min; i++)
		n[i] = m[i];
	free(ptr);
	return (n);
}
