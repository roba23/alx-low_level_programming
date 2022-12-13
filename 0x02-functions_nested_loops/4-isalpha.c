#include <ctype.h>
#include "main.h"
/**
 * _isalpha - checks if a character is a
 * number or not
 * @c:integer value accepted
 *
 * Return: return 0 if it is a number
 * 1,if it is not a number
 */
int _isalpha(int c)
{
	int d = isalpha(c);
	int m;

	if (d == 0)
		m = 0;
	else
		m = 1;
	return (m);
}

