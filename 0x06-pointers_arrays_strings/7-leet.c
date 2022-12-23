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
	char c[] = "aAeEoOtTlL";
	char r[] = "43071";
	long int i, j, size;

	size = strlen(a);
	printf("size:%ld\n", size);
	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; c[j] != '\0'; j++)
		{
			if (a[i] == c[j])
			{
				a[i] = r[j / 2];
			}

		}
	}
	return (a);

}
