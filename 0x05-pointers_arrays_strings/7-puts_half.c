#include "main.h"
#include <string.h>
/**
 * puts_half - function that print last half of a string
 * @str: string passed to print
 * Return: void;
 */
void puts_half(char *str)
{
	long int i, size, j;

	size = strlen(str);
	if (size % 2 == 0)
	{
		for (i = size/2; i < size; i++)
			_putchar(str[i]);
	}
	else
	{
		for (j = (size-1)/2; j <= size; j++)
			_putchar(str[j]);
	}
	_putchar('\n');
}
