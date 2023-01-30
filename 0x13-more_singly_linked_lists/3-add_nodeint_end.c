#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - add node at the end
 * @head:the pointer to the last element
 * @n: integer value to assign
 * Return:pointer to the last element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current, *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->next = NULL;
	new->n = n;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	current = *head;
	while (current->next != NULL)
		current = current->next;
	current->next = new;
	return (*head);
}


