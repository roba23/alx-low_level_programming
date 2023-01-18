#include <stdio.h>
/**
 * print_name - print name  passed to a function
 * @name: name
 * @f: the function passed
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
