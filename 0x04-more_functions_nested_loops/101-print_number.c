#include <stdio.h>
#include "main.h"
#include <limits.h>
#include <math.h>
/**
 * print_number - print number using putchat
 * @n: the number to print out
 * Return: 0
 */
void print_number(int n)
{
	int flag = 0;

	if (n == INT_MIN)
	{
		_putchar('-');
		n = (n + 1) * -1;
		flag = 1;
	}
	if (n < 0 && n != INT_MIN)
	{
		_putchar('-');
		n *= -1;
	}
	if (n / 10)
	{
		print_number(n / 10);
	}
	if (flag)
		_putchar(((n % 10) + 1) + '0');
	else
		_putchar((n % 10) + '0');
}
