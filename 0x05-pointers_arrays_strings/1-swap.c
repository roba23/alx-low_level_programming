#include "main.h"
/**
 * swap_int - swap two integers using a function by
 * using pointers
 * @a: the first operand
 * @b: the second operand
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

