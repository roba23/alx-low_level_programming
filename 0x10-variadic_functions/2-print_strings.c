#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - print strings given as parameters
 * @separator: separator used
 * @n: number of strings to print
 * Return: nothing
 */
void print_strings(char *separator, unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *s;
	char *c = "(nil)";

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);
		if (separator != NULL && i > 0)
		{
			if (s == NULL)
				s = c;
			printf("%s%s", separator, s);
		}
		else
			printf("%s", s);
	}
	printf("\n");
	va_end(args);
}
