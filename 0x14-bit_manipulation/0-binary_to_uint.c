#include <stdio.h>
#include "main.h"
#include <string.h>
#include <math.h>
/**
 * get_multiplier - get to which  power of 2 the
 * number should be multiplied according to it
 * position
 * @j: the power like pow(2, j)p
 * Return: return the multiplier
 */
unsigned int get_multiplier(unsigned int j)
{
	unsigned int mul, i;

	if (j == 0)
		return (1);
	mul = 1;
	i = 0;
	for (i = 0; i < j; i++)
	{
		mul *= 2;
	}
	return (mul);
}
/**
 * binary_to_uint - convert binary to unsigned int
 * @b: the string containing the binary
 * Return: return the converted unsigned number ans
 * 0 if there are any charcters other than 0 or 1 or if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum, i, j;

	i = sum = 0;
	j = (unsigned int)strlen(b) - 1;
	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		sum += (b[i] - '0') * get_multiplier(j - i);
	}
	return (sum);
}


