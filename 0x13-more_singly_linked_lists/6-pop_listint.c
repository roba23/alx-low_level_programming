#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - delete first element from the node
 * @head: pointer to the first node
 * Return: the element of the deleted node
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int m;

	if (*head == NULL)
		return (0);
	ptr = *head;
	m = ptr->n;
	ptr = ptr->next;
	free(*head);
	*head = ptr;
	return (m);
}
