#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - function to print all elements of a node in a  linked list
 * @h: pointer to the first element of the lists
 * Return: return the length of string store on the node
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	for (count = 0; h; count++)
	{
		if (h->str == NULL)
			printf("[%i] %s\n", 0, "(nil)");
		else
			printf("[%i] %s\n", h->len, h->str);
		h = h->next;

	}
	return (count);

}
