#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - insert a node at the specified index
 * @head: pointer to the head of the list
 * @idx: indext to insert element at
 * @n: the data to the node
 * Return: the adress of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new, *prev;
	unsigned int i;

	i = 0;
	temp = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	for (i = 0; temp; i++)
	{
		if (i == (idx - 1))
			prev = temp;
		if (i == idx)
		{

			new->next = temp;
			prev->next = new;
			new->n = n;
			return (new);


		}
		temp = temp->next;
	}
	free(new->next);
	free(new);
	return (NULL);
}
