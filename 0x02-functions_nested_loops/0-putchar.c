#include <stdio.h>
#include "main.h"
/**
 * main - print the alphabet in lower case
 *
 * Return: return 0 on sucess
 * on error, return 1
 */
int main(void)
{
	char m[9] = "_putchar";
	int i;
	int length = sizeof(m) / sizeof(m[0]);

	for (i = 0; i < length; i++)
		_putchar(m[i]);
	_putchar('\n');
	return (0);
}
