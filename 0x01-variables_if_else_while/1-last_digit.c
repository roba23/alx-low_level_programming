#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main-generates a random number and
 * determine if the number is 0
 * greater than 5 or lessthan 6
 * Return:retun 0 if sucessfull
 */
int main(void)
{
	int n, temp;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	temp = n % 10;
	if (temp > 5)
		printf("%d is greater than 5\n", temp);
	else if (temp < 6 && temp != 0)
		printf("%d and is less than 6 and not 0", temp);
	else
		printf("%d is 0", temp);
	return (0);
}
