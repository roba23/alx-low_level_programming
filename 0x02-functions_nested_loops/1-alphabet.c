#include <stdio.h>
#include "main.h"
/**
 * main - function prints alphabet in
 * lower case and then a new line
 *
 * Return: 0 if succesful.
 * error, print 1
 */
int main(void)
{
	char d;

	for (d = 'a'; d < 'z'; d++)
		_putchar(d);
	_putchar('\n');
	return (0);
}
