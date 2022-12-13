#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - prints the last digit of a number
 * @m:the number to find the last digit of
 *
 * Return: return the last digit of the number
 */
int print_last_digit(int m)
{
	int d;

	d = abs(m % 10);
	_putchar(d + '0');
	return (d);
}
