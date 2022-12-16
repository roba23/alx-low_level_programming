#include "main.h"
#include <stdio.h>
/**
 * main - print numbers from 1 to 100
 * print FIZZ for multiples of 3 and
 * print Buzz for multiples of 5 and
 * FizzBuzz for multiples of both
 * Return: void
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("%s ", "Fizz");
		else if (i % 5 == 0)
			printf("%s ", "Buzz");
		else
			printf("%d ", i);
	}
	return (0);
}
