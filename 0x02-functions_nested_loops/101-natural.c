#include <stdio.h>
/**
 * main - sums multiples of 3 and 5 
 * less than 1024
 * Return: return 0 if succesfull 0
 */
int main(void)
{
	int i, rem1, rem2, sum;

	for (i = 0; i < 1024; i++)
	{
		rem1 = i % 3;
		rem2 = i % 5;
		if (rem1 == 0 || rem2 == 0)
		{	
			sum += i;
		}

	}
	printf("%d\n", sum);
	return (0);
}
