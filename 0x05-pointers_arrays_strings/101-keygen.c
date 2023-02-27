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
	char m[64];

	sum = count = j = 0;
	for (i = 33; i <= 126; i++)
	{

		sum = 2772 % i;
		count = 2772 / i;
		
		if (sum == 0 && count < 64 )
		{
			break;
		}
	}
	for (j = 0; j < count; j++)
	{
		m[j] = i;
	}
	m[j] = '\0';
	printf("%s", m);


	return (0);
}
