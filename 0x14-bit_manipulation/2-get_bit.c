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
		return ((index > (8 * sizeof(n) - 1)) ? -1 : (int)(n >> index) & 1);
}

