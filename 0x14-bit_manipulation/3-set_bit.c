#include "main.h"
/**
 * set_bit - sets bit at index to 1
 * @n: pointer to number
 * @index: index to change
 * Return: 1 on success, -1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int val;

	if (index > 63)
		return (-1);
	val = 1UL;
	val <<= index;
	*n = (val | *n);
	return (1);
}
