#include <stdio.h>
#include "main.h"
/**
 * main - function prints alphabet in
 * lower case and then a new line
 *
 * Return: 0 if succesful.
 * error, print 1
 */
void print_alphabet(void)
{
	char d;

	for (d = 'a'; d <= 'z'; d++)
		_putchar(d);
	_putchar('\n');
}
