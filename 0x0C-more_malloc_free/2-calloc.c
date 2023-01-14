#include <stdlib.h>
/**
 * _calloc - this function allocates a memory size using
 * mallloc and assigns it the value zero
 * @size: size of each elements of memory
 * @nmemb: number of elements
 * Return: return pointer to  the allocated space
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	unsigned int i;

	i = 0;
	if (nmemb == 0 || size == 0)
		return (NULL);
	s = malloc(nmemb * size);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		s[i] = 0;
	return (s);
}
