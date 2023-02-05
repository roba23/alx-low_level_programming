#include "main.h"
/**
 * flip_bits - calculates the number of bits needed
 * to get from one number to another
 * @n: base number
 * @m: number to transform to
 * Return: the number of bit transformations needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int val;
	unsigned int i;

	i = 0;
	for (val = 1UL; val > 0; val <<= 1)
	{
		if ((val & n) != (val & m))
			i++;
	}
	return (i);

}

