#include <stdio.h>
/**
 * main-prints the alphabet in upper and lower
 * case on a single line
 *
 * Return:returns 0 if succesfull
 */
int main(void)
{
	char z, b;

	for (z = 'a'; z <= 'z'; z++)
		putchar(z);
	for (b = 'A'; b <= 'Z'; b++)
		putchar(b);
	printf("\n");
	return (0);
}

