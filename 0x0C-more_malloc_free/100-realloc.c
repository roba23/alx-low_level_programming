#include <stdlib.h>
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
	char *p;

	p  = ptr;
	if (old_size == new_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (ptr);
	}
	p = malloc(new_size * sizeof(char));
	return (p);
}
