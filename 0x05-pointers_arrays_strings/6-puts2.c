#include "main.h"
#include <string.h>
/**
 * puts2 - reverses a string.
 * @str: input string to reverse.
 */
void puts2(char *str)
{
	long int i, size;

	i = 0;
	size = strlen(str) - 1;
	while (i <= size)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
