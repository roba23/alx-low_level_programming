#include <stdio.h>
/**
 * main - prints finonacci series
 * up to the 98th element
 * Return: return 0 on sucess
 * on error return 1
 */
int main(void)
{
	long int i, j, sum, d;

	i = 0;
	j = 1;
	sum = 0;
	for (d = 0; d < 98; d++)
	{
		sum = i + j;
		printf("%.20ld, ", sum);
		i = j;
		j = sum;
	}
	printf("\n");
	return (0);
}

