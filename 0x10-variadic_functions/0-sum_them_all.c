#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - accepts number of arguments and adds them  together
 * @n:number of arguments
 * Return: the sum if n > 0
 * 0 if  n is equal to 0
 */
int sum_them_all(unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list args;


	if (n == 0)
		return (0);
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
	

