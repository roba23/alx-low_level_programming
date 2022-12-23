#include "main.h"
/**
 * reverse_array - function to reverse an array
 * @a: array to be reversed
 * @n: the size of tghe array
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
