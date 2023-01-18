#include "function_pointers.h"
/**
 * int_index - compare elements of array and return the element index
 * @array: array pointer
 * @size: size of the array
 * @cmp: pointer to the function
 * Return: index of element if succesfull
 * -1 if there is no elements that match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || !(array) || !(cmp))
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
