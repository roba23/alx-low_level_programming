#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * list_len - function theat returns number of elements in alinked a list
 * @h: pointer to the first element in the list
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	size_t count;
	int i;

	for (i = 0; h; i++)
	{
		count++;
	}
	return (count);
}
