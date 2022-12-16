#include "main.h"
#include <ctype.h>

/**
 * _isupper - determines wether a character is
 * uper or lower case
 * @c: input in number format
 * Return: 1 if uppercase
 * 0 otherwise
 */
int _isupper(int c)
{
	if (isupper(c) != 0)
		return (1);
	else
		return (0);
}
