#include <stdio.h>
#include "main.h"
/**
 * print_number - print number using putchat
 * @n: the number to print out
 * Return: 0
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	if (n / 10 != 0)
	{
		print_number(n / 10);
	}
	_putchar(n % 10 + '0');
}

