#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * infinite_add - add a very large numbrs passsed as strings
 * @n1: the furst string
 * @n2: second string
 * @size_r: size of the array holding the result
 * @r: the buffer that holds the result
 * Return: return the pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, sum, carry, len1, len2, lendif;
	char result[1024];

	i = len1 = len2 = carry = sum = 0;
	len1 = strlen(n1);
	len2 = strlen(n2);
	lendif = len1 - len2;
	for (i = len1 - 1; i >= 0; i--)
	{
		if (i >= lendif)
		{
			sum = (n1[i] - '0') + (n2[i - lendif] - '0') + carry;
			result[i] = (sum % 10) + '0';
			carry = sum / 10;
		}
		else
		{
			sum = (n1[i] - '0') + carry;
			result[i] = (sum % 10) + '0';
			carry = sum / 10;
		}

	}
	if (carry)
	{
		for (i = len1 - 1; i >= 0; i--)
		{
			result[i + 1] = result[i];
		}
		result[0] = carry + '0';
		result[len1 + 1] = '\0';
	}
	else
		result[len1] = '\0';
	for (i = 0; i < size_r; i++)
	{
		r[i] = result[i];
	}

	return (r);
}



