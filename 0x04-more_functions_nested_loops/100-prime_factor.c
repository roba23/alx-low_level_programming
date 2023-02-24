#include <stdio.h>
/**
 * main - find the largest prime factor of a number
 * Return: 0
 */
int main(void)
{
	long int n;
	long int div = 2, maxFact;

	n = 612852475143;
	while (n != 0)
	{
		if (n % div != 0)
			div = div + 1;
		else
		{
			maxFact = n;
			n = n / div;
			if (n == 1)
			{
				printf("%ld is the largest prime factor !", maxFact);
				break;
			}
		}
	}
	printf("%ld\n", maxFact);
	return (0);
}
