#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * reverse_listint - reverse a singly linked list
 * @head: the pointer to the first node of the list to be reversed
 * Return: the head of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *h, *temp1, *temp2;

	if (*head == NULL)
		return (NULL);
	h = *head;
	temp1 = NULL;
	while (h != NULL)
	{
		temp2 = h->next;
		h->next = temp1;
		temp1 = h;
		h = temp2;
	}
	*head = temp1;
	return (h);
}

