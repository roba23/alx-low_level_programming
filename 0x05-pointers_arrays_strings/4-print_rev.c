#include <string.h>
#include "main.h"
/**
 * print_rev - print a string in reverse
 * @s: string passed
 * Return: void
 */
void print_rev(char *s)
{
	int i;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

