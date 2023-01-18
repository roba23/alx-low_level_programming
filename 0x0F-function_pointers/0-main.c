#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name_as_is - print name accepted
 * @name: name
 * Return:Nothing
 */
void print_name_as_is(char *name)
{
	printf("Hello my name is %s\n", name);
}
/**
 * print_name_uppercase - print name in an upper case
 * @name -name to print
 * Return: nothing
 */
void print_name_uppercase(char *name)
{
	unsigned int i;

	printf("My name in upper case is \n");
	i = 0;
	while (name[i])
	{
		if (name[i] >= 'a' && name[i] <= 'z')
		{
			putchar(name[i] + 'A' - 'a');
		}
		else
		{
			putchar(name[i]);
		}
		i++;
	}

}
/**
 * main - checks code
 * Return - always 0
 */
int main(void)
{
	print_name("Bob", print_name_as_is);
	print_name("Bob Dylan", print_name_uppercase);
	printf("\n");
	return (0);
}
