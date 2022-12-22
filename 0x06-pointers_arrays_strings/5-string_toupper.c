#include "main.h"
#include <string.h>
/**
 * string_toupper - convert lower case characters to uppercase
 * @a: argument
 * Return: char
 */
char *string_toupper(char *a)
{
	int i;
	int size;

	size = strlen(a);
	for (i = 0; i < size; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
			a[i] -= 32;
	}
	return (a);
}
