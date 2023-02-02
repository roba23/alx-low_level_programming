#include "main.h"
#include <stdio.h>
/**
 * get_bit - get the bit at the given index
 * @n: the number
 * @index: index
 * Return: return the value of the bit at index
 * or -1 if it fails
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;
	unsigned long int result, remainder;

	if (n == 0)
		return (0);
	for (i = 0; n != 0; i++)
	{
		result = 0.5 * n;
		remainder = n - (2 * result);
		if (i == index)
			return (remainder);
		n = result;
	}
	return (-1);
}
