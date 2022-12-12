#include <stdio.h>
/**
 * main-print the alphabet
 *
 * Return:return 0 if succesfull
 */
int main(void)
{
	char s;

	for (s = 'a'; s <= 'z'; s++)
		putchar(s);
	printf("\n");
	return (0);
}
