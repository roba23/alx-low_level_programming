#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - get node at index
 * @head: starting address of node
 * @n: the index to locate node
 * Return: pointer to node at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int n)
{
	listint_t *temp;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	i = 0;
	temp = head;
	while (temp != NULL)
	{
		if (i == n)
			return (temp);
		temp = temp->next;
		i++;
	}
	return (NULL);
}
