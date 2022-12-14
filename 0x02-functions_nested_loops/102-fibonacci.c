#include <stdio.h>
/**
 * main - main function sums fibonachi series up to 100
 * Return: retun 0 if sucessfull
 */
int main(void)
{
	int i, j, temp, d, sum;

	i = 0;
	j = 1;
	sum = 0;
	for (d = 0; d < 50; d++)
	{
		sum = i + j;
		if (d == 0)
			printf("%d,", sum);
		else 
			printf("%2d,", sum);
		temp = i;
		i = j;
		j = sum;
	}
	printf("%d\n", temp);
	return (0);
}

