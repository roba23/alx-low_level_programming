#include "main.h"
/**
 * _sqrt_recursion - find the square root of a number
 * @n: the number
 * Return: return the root of a number
 * -1 if it does not have any root
 */
int _sqrt_recursion(int n)
{
	return (find_root(1, n));
}
/**
 * find_root - determine wether the number has root or not
 * @i: the number to start checking from usually 1
 * @n: the number
 */
int find_root(int i, int n)
{
	if (i * i == n)
		return (n);
	else if (i * i > n)
		return (-1);
	return (find_root(i + 1, n));
}
