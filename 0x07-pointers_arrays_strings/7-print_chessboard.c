#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - function prints alements of a 2d array
 * @a: the array being passed
 * Return: return nothing and print chessboard
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);

		}
		_putchar('\n');
	}
}
