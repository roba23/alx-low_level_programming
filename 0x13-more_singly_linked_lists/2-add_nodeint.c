#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <stdarg.h>
/**
 * add_nodeint - add a node at the beginning of the list
 * @head: pointer to the first element
 * @n: value
 * Return: number of elements
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->next = *head;
	new->n = n;
	*head = new;
	return (*head);
}
