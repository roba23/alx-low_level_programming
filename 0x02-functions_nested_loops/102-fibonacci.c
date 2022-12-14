#include <stdio.h>
/**
 * main - main function sums fibonachi series up to 100
 * Return: retun 0 if sucessfull
 */
int main(void)
{
	long int i, j, d, sum;

	i = 0;
	j = 1;
	sum = 0;
	for (d = 0; d < 50; d++)
	{
		sum = i + j;
		if (d == 0)
			printf("%1ld,", sum);
		else if (d < 49) 
			printf("%1ld,", sum);
		else if (d == 49)
			printf("%1ld", sum);
		i = j;
		j = sum;
	}
	printf("\n");
	return (0);
}

