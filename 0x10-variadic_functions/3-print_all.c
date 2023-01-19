#include <stdarg.h>
#include <stdio.h>
#include <string.h>
/**
 * for_char - print character
 * @c: a list of arguments
 * Return:nothing
 */
void for_char(va_list c)
{
	printf("%c", va_arg(c, int));
}
/**
 * for_int - print integer
 * @i: a list of arguments
 * Return: nothing
 */

void for_int(va_list i)
{
	printf("%d", va_arg(i, int));
}
/**
 * for_float - print float
 * @f:list of arguments
 * Return:nothing
 */

void for_float(va_list f)
{
	printf("%f", va_arg(f, double));
}
/**
 * for_string - print string
 * @s: list of arguments
 * Return:nothing
 */
void for_string(va_list s)
{
	char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_all - print all arguments of different
 * types
 * @format:types of formats
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	int i, j;
	char type[4] = {'c', 'i', 'f', 's'};
	va_list args;
	void (*func_point[4])(va_list) = {&for_char,
		&for_int, &for_float, &for_string};
	char *separator = "";

	i = 0;
	/*len = (int)strlen(format);*/
	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
		if (format[i] == type[j])
		{
			printf("%s", separator);
			func_point[j](args);
			separator = ", ";
		}
		++j;
		}
		++i;
	}
	va_end(args);
	printf("\n");
}



