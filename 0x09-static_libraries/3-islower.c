#include <ctype.h>
/**
 * _islower - main
 * @c:integer value
 *
 * Return: 0 if sucessfull
 */
int _islower(int c)
{
	int m = islower(c);
	int j;

	if (m == 0)
		j = 0;
	else if (m != 0)
		j = 1;
	return (j);
}
