#include <stdlib.h>
/**
 * array_range - this functiotn allocates memory for an array
 * @min: minumum number to write in memory
 * @max: maximum number to write in the array
 * Return: return a pointer to the allocated memory
 */
int *array_range(int min, int max)
{
	int i;
	int size;
	int *p;
	int m;

	i = 0;
	m = min;
	if (min > max)
		return (NULL);
	size = max - min + 1;
	p = malloc(size * sizeof(int));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		p[i] = i + m;
	return (p);
}


