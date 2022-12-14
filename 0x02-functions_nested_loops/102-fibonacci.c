#include <stdio.h>
/**
 * main - main function sums fibonachi series up to 100
 * Return: retun 0 if sucessfull
 */
int main(void)
{
	int i, j, temp, d;

	i = 1;
	j = 1;
	for (d = 0; d < 100; d++)
	{
		temp = i + j;
		i = j;
		j = temp;
	}
	printf("%d\n", temp);
	return (0);
}

