#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - function prints alphabet in
 * lower case and then a new line
 *
 * Return: nothing to return
 */
void print_alphabet(void)
{
	char d;

	for (d = 'a'; d <= 'z'; d++)
		_putchar(d);
	_putchar('\n');
}
