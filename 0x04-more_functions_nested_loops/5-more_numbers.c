#include "main.h"
/**
 * more_numbers - print numbers from 0 to 14
 * ten times followed by a new line
 * Return: void
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j == 0)
				_putchar(j + '0');
			else
				print_long(j);
		}
	_putchar('\n');
	}
}
/**
 * print_long - prints long ntegers with morethan two decimals
 * @value:the value to be printed
 * Return: void
 */
void print_long(int value)
{

	if (value != 0)
	{
		print_long(value / 10);
		_putchar((value % 10) + '0');
	}
}

