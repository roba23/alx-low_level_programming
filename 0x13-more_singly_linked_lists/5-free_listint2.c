#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - free list of nodes
 * @head: pointer to the list passed by value
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *m;

	m = *head;
	if (*head == NULL)
		return;
	while (m != NULL)
	{
		m = m->next;
		free(*head);
		*head = m;

	}
}