#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints from n to 98
 * @n:the input
 *
 * Return: no return value
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (n == 98)
				printf("%d", n);
			printf("%d, ", n);
		}
	}
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (n == 98)
				printf("%d", n);
			printf("%d, ", n);
		}
	}
	else
	{
		printf("98");
	}
}
