#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <stdbool.h>
/**
 * find_node - find the node where loop starts
 * @tortoise: the tortoise
 * @hare: the hare
 * Return: the pointer where the loop starts
 */
listint_t *find_node(listint_t *tortoise, listint_t *hare)
{
	while (1)
	{
		if (tortoise == hare)
			return (tortoise);
		tortoise = tortoise->next;
		hare = hare->next;
	}
	return (NULL);
}
/**
 * free_listint_safe - free a list if it contains a loop
 * @head: the pointer to the first node of the singly linked list
 * Return: return the size of the list freed
 */
size_t free_listint_safe(listint_t **head)
{
	size_t size;
	int m;
	bool met;
	listint_t *temp, *tortoise, *hare, *ptr, *temp1;

	met = false;
	temp = tortoise = hare = *head;
	m = size = 0;
	if (*head == NULL)
		return (0);
	while (temp != NULL)
	{
		tortoise = tortoise->next;
		hare = (hare->next)->next;
		if (hare == NULL || tortoise == NULL)
			break;
		if (hare == tortoise)
		{
			met = true;
			ptr = find_node(*head, hare);
			break;
		}
		temp = temp->next;
	}
	temp = *head;
	while (temp)
	{
		size += 1;
		if (met && ((temp->next == ptr) || temp == ptr))
			m = 1;
		temp1 = temp;
		temp = temp->next;
		free(temp1);
		if (temp == ptr && m)
			break;
	}
	*head = NULL;
	return (size);
}
