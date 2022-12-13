#include "main.h"
/**
 * print_sign - determines the sign of an integer
 * @n: any integer accepted from the user or other program
 *
 * Return: return 1 if n is greater than zero
 * 0 if n is zero
 * -1 if the number is lessthan zero
 */
int print_sign(int n)
{
	int sgn;

	if (n < 0)
	{
		sgn = -1;
		_putchar('-');
	}
	else if (n > 0)
	{
		sgn = 1;
		_putchar('+');
	}
	else
	{
		sgn = 0;
		_putchar('0');
	}
	return (sgn);
}
