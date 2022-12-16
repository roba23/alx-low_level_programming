#include "main.h"
/**
 * print_line - print dashes n times
 * @n: how many times to print dashes
 * Return: void
 */
void print_line(int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
