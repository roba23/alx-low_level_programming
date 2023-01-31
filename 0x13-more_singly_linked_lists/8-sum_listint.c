#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint - sum all elements of a list
 * @head: pointer to the first node
 * Return: the sum of all elements
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum;

	sum = 0;
	if (head == NULL)
		return (0);
	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}

