#include "main.h"
#include <limits.h>
/**
 * print_binary - convert a number to binary and print
 * @n: number
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int val;
	int flag;

	flag = 0;
	if (n == 0)
		_putchar('0');
	for (val = 1UL << ((sizeof(unsigned long) * 8) - 1); val > 0; val >>= 1)
	{
		if ((val & n) != 0)
			flag = 1;
		if (((val & n) != 0) && flag == 1)
			_putchar('1');
		else if (flag)
			_putchar('0');
	}

}
