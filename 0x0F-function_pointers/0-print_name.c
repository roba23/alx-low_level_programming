#include "function_pointers.h"
/**
 * print_name - print name  passed to a function
 * @name: name
 * @f: the function passed
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		f("");
	else
		f(name);
}
