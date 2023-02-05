#include "main.h"
/**
 * clear_bit - sets a bit at index to zero
 * @n: pointer to number
 * @index: index to change
 * Return: 1 on success, -1 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int val;

	if (index > 63)
		return (-1);
	val = 1UL;
	val <<= index;
	*n &= ~(val);
	return (1);
}
