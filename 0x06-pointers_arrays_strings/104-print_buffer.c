#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * print_buffer - print a buffer located with size size
 * @size: size of the buffer in bytes
 * @b: the buffer
 * Return: nothing
 */
void print_buffer(char *b, int size)
{
	int i, j, count;

	i = j = 0;
	count = 1;
	if (size <= 0)
	{
		printf("\n");
		return;
	}
	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);
		for (j = i; j < (10 * count); j++)
		{
			if (j < size && j % 2 == 0)
				printf("%02x", b[j]);
			else if (j < size && j % 2 != 0)
				printf("%02x ", b[j]);
			if (j >= size && j % 2 == 0)
				printf("  ");
			else if (j >= size && j % 2 != 0)
				printf("   ");
		}
		for (j = i; j < (10 * count) && j < size; j++)
		{
			if (b[j] >= 32 && b[j] < 127)
				printf("%c", b[j]);
			else
				printf(".");
		}
		printf("\n");
		count++;
	}
}

