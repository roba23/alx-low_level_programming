#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - add two numbers
 * @a: first number
 * @b: second number
 * Return: return the sum of two numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - add two numbers
 * @a: first number
 * @b: second number
 * Return: return the diferrence of two numbers
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - add two numbers
 * @a: first number
 * @b: second number
 * Return: return the product of two numbers
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - add two numbers
 * @a: first number
 * @b: second number
 * Return: return the sum of two numbers
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - add two numbers
 * @a: first number
 * @b: second number
 * Return: return the remainder of division two numbers
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

