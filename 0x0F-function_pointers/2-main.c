#include <stdio.h>
#include "function_pointers.h"
/**
 * is_98 - function to check if an element is 98
 * @elem: element of an array
 * Return: 1 if element is 98
 * 0 if element is not 98
 */
int is_98(int elem)
{
	return (elem == 98);
}

/**
 * is_strictly_positive - check if element is positive
 * @elem: element to be checked
 * Return: 1 if number is positive
 * 0 if number is negative
 */
int is_strictly_positive(int elem)
{
	return (elem > 0);

}

/**
 * is_abs_98 - check if number or its absolute value is 98
 * @elem: number to be checked
 * Return: 1 if number's  absolute value is 98
 */
int abs_is_98(int elem)
{
	return (elem == 98 || -elem == 98);

}

/**
 * main - check the code
 * Return: aleays 0
 */
int main(void)
{
	int array[20] = {0, -98, 98, 402, 1024, 4096, -1024, -98, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 98};
	int index;

	index = int_index(array, 20, is_98);
	printf("%d\n", index);
	index = int_index(array, 20, abs_is_98);
	printf("%d\n", index);
	index = int_index(array, 20, is_strictly_positive);
	printf("%d\n", index);
	return (0);
}


