#include <stddef.h>
#include "lists.h"
#include <stdio.h>
/**
 * listint_len - return number of elements in a list
 * @h: pointer to the first element in a list
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t i;

	if (h == NULL)
		return (0);
	for (i = 0; h; i++)
	{
		h = h->next;
	}
	return (i);
}
