#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
 * print_all - print all arguments of different
 * types
 * @format:types of formats
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	int i, j, len, b;
	char type[4] = {'c', 'i', 'f', 's'}; 
	va_list args;
	char a, *d;
	float c;

	i = 0;
	len = (int)strlen(format);
	va_start(args, format);
	while (i < len)
	{
		j = 0;
		while (j < 4)
		{
		if (format[i] == type[j])
		{
			switch (j)
			{
			case 0:
				a = va_arg(args, int);
				printf("%c, ", a);
				break;
			case 1:
				b = va_arg(args, int);
				printf("%d, ", b);
				break;
			case 2:
				c = va_arg(args, double);
				printf("%f, ", c);
				break;
			case 3:
				d = va_arg(args, char *);
				if (d == NULL)
					printf("(nil), ");
				else
					printf("%s, ", d);
				break;
			default:
				break;
			}
		}
		++j;
		}
		++i;
	}
	va_end(args);
	printf("\n");
}
						


