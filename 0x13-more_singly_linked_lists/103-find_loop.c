#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * find_loop -find if there is a loop
 * @tortoise: the first pointer
 * @hare: the second pointer
 * Return:pointer to the loop start
 */
listint_t *find_loop(listint_t *tortoise, listint_t *hare)
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
			return (find_loop(tortoise, hare));
		}
	}
	return (NULL);
}
