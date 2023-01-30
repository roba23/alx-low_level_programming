#include <stdio.h>
#include "lists.h"
/**
 * print_listint - print all elements in a list
 * @h: adress of the first element
 * Return: return number of elements
 */
size_t print_listint(const listint_t *h)
{
	size_t i;
	
	if (h == NULL)
		return (0);
	for (i = 0; h; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
