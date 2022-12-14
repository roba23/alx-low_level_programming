#include <stdio.h>
/**
 * main - prints the sum of even valued terms
 * in fibonacci series not excedding 4,000,000
 * Return: return 0 if succesfull
 */
int main(void)
{
	long int i, j, sum, temp;

	i = 0;
	j = 0;
	sum = 0;
	while (sum < 4000000)
	{
		temp = i + j;
		if (temp % 2 == 0)
			sum += temp;
		i = j;
		j = sum;
	}
	printf("%ld\n", sum);
	return (0);


}
