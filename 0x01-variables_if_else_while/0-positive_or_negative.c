#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main-the main function
 *
 * Return: if it succeds
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

/* your code goes there */
	if (n < 0)
	{
	printf("%d is %s\n", n, "negative");
	}
	else if (n > 0)
	{
	printf("%d is %s\n", n, "positive");
	}
	else
	{
	printf("%d is %s\n", n, "zero");
	}
	return (0);

}
