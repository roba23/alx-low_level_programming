#include <stdio.h>
#include "3-function_like_macro.h"
#include "3-function_like_macro.h"
/**
 * main - checks the code
 * Return: Always 0
 */
int main(void)
{
	int i;
	int j;

	i = ABS(-98) * 10;
	j = ABS(98) * 10;
	printf("%d ,%d\n", i, j);
	printf("%d\n", ABS(1024 - 2048));
	return (0);
}


