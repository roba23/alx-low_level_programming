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
	unsigned int val;

	if (index > 63)
		return (-1);
	val = 1UL;
	val <<= index;
	if ((n & val) == 0)
		return (0);
	else
		return (1);
}

