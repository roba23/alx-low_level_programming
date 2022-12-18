#include "main.h"
/**
 *print_triangle - print triangle shape
 *@size: determine size of triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, k;

	for (i = 1; i <= size; i++)
	{
		for (j = i; j < size; j++)
		{
			_putchar(' ');
		}
		for (k = 1; k <= i; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
		
	}
	_putchar('\n');
}

