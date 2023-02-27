#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - finds key for a function
 * Return: always zero
 */
int  main(void)
{
	int sum, i, j;
	int count;

	sum = count = j = 0;
	for (i = 33; i <= 126; i++)
	{

		sum = 2772 % i;
		if (sum == 0)
		{
			count = 2772 / i;
			break;
		}
	}
	for (j = 0; j < count; j++)
	{
		printf("%c", i);
	}


	return (0);
}
