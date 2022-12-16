#include <ctype.h>
#include "main.h"

/**
 * _isupper - determines if a character is upper or
 * or lower case
 * @c: input in number formar
 * Return: return 1 if upper case 
 *  for any other case
 */
int _isupper(int c)
{
	int m;

	m = isupper(c);
	if (m != 0)
	{
		return (m);
	}
	else
	{
		return (0);
	}
}
