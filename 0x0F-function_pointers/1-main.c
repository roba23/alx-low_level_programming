#include <stdio.h>
#include "function_pointers.h"

/**
 * print_elem - print elements of an array
 * @elem: the integer to print
 * Return: Nothing
 */
void print_elem(int elem)
{
	printf("%d\n", elem);
}
/**
 * print_elem_hex - prints an integer in hex format
 * @elem: the integer to print
 *
 * Return: Nothing
 */
void print_elem_hex(int elem)
{
	printf("0x%x\n", elem);
}
/**
 * main - checks the code
 * Return - Always 0
 */
int main(void)
{
	int array[5] = {0, 98, 402, 1024, 4096};
	array_iterator(array, 5, &print_elem);
	array_iterator(array, 5, &print_elem_hex);
	return (0);
}
