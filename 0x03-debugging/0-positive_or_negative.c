#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main-generates a random number and
 * displays the number and determine
 * wether it is negative or positive
 * Return:returns 0 if sucessful
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}
