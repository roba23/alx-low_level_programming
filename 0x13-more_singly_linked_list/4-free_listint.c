#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - free a given list
 * @head: head the first list print
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	free_listint(head->next);
	free(head);
}
