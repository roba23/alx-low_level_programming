#include "main.h"
/**
 * _puts_recursion - print a long string using Putchar
 * and recursion
 * @s: string to be printed
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}

