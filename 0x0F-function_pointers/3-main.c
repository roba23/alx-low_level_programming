#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - function to check calculator
 * @argc: count atrguments
 * @argv: array of values
 * Return: nothing
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;
	int (*fun_point)(int, int);

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	fun_point = get_op_func(argv[2]);
	if (fun_point == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if (num2 == 0 && (*argv[2] == '/' || *argv[2] == '%'))
	{	
		printf("Error\n");
		exit(100);
	}
	result = fun_point(num1, num2);
	printf("%d\n", result);
	return (0);
}


