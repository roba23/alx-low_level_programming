#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print the diagonal sums
 * @a: array
 * @size: size of the square matrix
 */
void print_diagsums(int *a, int size)
{
	int diag1, diag2;
	int i, j;

	i = j = diag1 = diag2 = 0;
	for (i = 0; i < size * size; i += (size + 1))
	{
		diag1 += a[i];
	}
	for (i = (size - 1); i <= (size * size) - (size - 1); i += (size - 1))
	{
		diag2 += a[i];
	}
	printf("%d, %d\n", diag1, diag2);

}

