#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * find_listint_loop - find if the loop contains a loop
 * @head: the start of the head node
 * Return: the pointer to where the loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise, *hare;

	tortoise = (void *)head;
	hare = (void *)head;
	while (head)
	{
		tortoise = tortoise->next;
		hare = (hare->next)->next;
		if (tortoise == NULL || hare == NULL)
			return (NULL);
		if (tortoise == hare)
		{
			tortoise = (void *)head;
			return (find_ptr(tortoise, hare));
		}
	}
	return (NULL);
}
