#include "main.h"
#include <stdio.h>
/**
 * times_table - displays the multiplication table
 *
 * Return: returns nothing
 */
void times_table(void)
{
	int a, b, mul;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			mul = a * b;	
			printf("%2d", mul);
			if (b < 9)
				printf(",");

		}
		printf("\n");
	}
}
