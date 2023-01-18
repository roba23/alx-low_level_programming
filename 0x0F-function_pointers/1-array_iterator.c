#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - function irates an array and prints it using 
 * the function passed pointer to
 * @array: array pointer
 * @size: size of the array passed
 * @action()
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
		action(array[i]);
}

