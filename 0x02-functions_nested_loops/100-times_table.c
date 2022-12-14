#include <stdio.h>
#include "main.h"
/**
 * print_times_table - print times table
 * @n:argument
 *
 * Return: returns nothing
 */
void print_times_table(int n)
{
	int i,j,mul;

	if (n < 15 && n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				mul = i * j;
				if (j == n)
					printf("%4d", mul);
				else if (j == 0)
					printf("%d,", mul);
				else
					printf("%4d,", mul);




			}
			printf("\n");

		}
	}
}
