#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_numbers - print numbers passed
 * to afunction using the separator between them
 * @separator: the separator used between the numbers
 * @n: number of arguments to print
 * Return:nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int x;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (separator != NULL && (i > 0))
		{
			x = va_arg(args, int);
			printf("%s%d", separator, x);
		}
		else
		{
			x = va_arg(args, int);
			printf("%d", x);
		}

	}
	printf("\n");
	va_end(args);
}
