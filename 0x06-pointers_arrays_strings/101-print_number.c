#include <stdio.h>
#include "main.h"
#include <limits.h>
/**
 * print_number - print any  number using _putchar only
 * with out using long
 * @n: the number to be printed
 * Return: Nothing
 */
void print_number(int n)
{
	int flag = 0;

	if (n < 0 && n != INT_MIN)
	{
		_putchar('-');
		n *= -1;
	}
	if (n == INT_MIN)
	{
		_putchar('-');
		n += 1;
		n *= -1;
		flag = 1;

	}
	if (n / 10)
	{
		print_number(n / 10);
	}
	if (flag)
		_putchar(((n % 10) + 1) + '0');
	else
		_putchar(n % 10 + '0');
}

