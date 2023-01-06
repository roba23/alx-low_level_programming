#include <ctype.h>
#include "main.h"

/**
 * _isdigit - determines if an input is digit or not
 * @c: input in number format
 * Return: 1 if it is digit
 * 0,other wise
 */
int _isdigit(int c)
{
	int m;

	m = isdigit(c);
	if (m != 0)
		return (1);
	else
		return (0);
}


