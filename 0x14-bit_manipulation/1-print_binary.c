#include "main.h"

/**
 * print_binary - convert a number to binary and print
 * @n: number
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int result, remainder;

	if (n == '0')
	{
		_putchar('0');
		return;
	}
	result = 0.5 * n;
	remainder = n - (2 * result);
	n = result;
	if (n != 0)
		print_binary(n);
	_putchar(remainder + '0');
}
