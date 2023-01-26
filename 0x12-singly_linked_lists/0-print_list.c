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
	size_t count = 1;

	if (h == NULL)
		return (0);
	if (h->str == NULL)
		printf("[%d] %s\n", 0, "(nil)");
	else
		printf("[%d] %s\n", h->len, h->str);
	if (h->next != NULL)
	{
		print_list(h->next);
		count++;
	}
	return (count);

}
