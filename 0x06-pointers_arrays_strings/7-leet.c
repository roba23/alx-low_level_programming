#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * leet - replace character in strings with numbers
 * @a: character
 * Return: character with i e and a replaced by numbers
 */
char *leet(char *a)
{
	char c[10] = "aAeEoOtTlL";
	char r[5] = "43071";
	long int i, j, size;

	size = strlen(a);
	printf("size:%ld\n", size);
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (a[i] == c[j])
			{
				a[i] = r[j / 2];
			}

		}
	}
	return (a);

}
