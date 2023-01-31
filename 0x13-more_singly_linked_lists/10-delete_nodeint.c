#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - delete node at the given index
 * @head: pointer to the first element in the list
 * @index: the index of the node to be removed(deleted)
 * Return: the data from the deleted node (number)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *previous;
	unsigned int i;

	i = 0;
	current = *head;
	previous = *head;

	if (index == 0 && *head != NULL)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	for (i = 0; current; i++)
	{
		if (i == (index - 1))
			previous = current;
		if (i == index)
		{

			previous->next = current->next;
			free(current);
			return (1);
		}


		current = current->next;


	}
	return (-1);
}


