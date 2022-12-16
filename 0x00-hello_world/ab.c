#include <stdio.h>
/**
 * main - it takes two numbers as an input from
 * the user and siplay the sum as an output
 *
 * Return: Always  (sucess):
 *
 */
int main(void)
{
	int n, m, result;

	printf("enter two numbers to add\n");
	scanf("enter a:%d enter b:%d", &n, &m);
	result = n + m;
	printf("the result is=%d\n", result);
	return (0);
}
