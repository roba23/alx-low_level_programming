#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <stdbool.h>
/**
 * find_ptr - find the pointer
 * @tortoise: the pointer
 * @hare: the pointer
 * Return: pointer where the loop begins
 */
listint_t *find_ptr(listint_t *tortoise, listint_t *hare)
{

	while (tortoise)
	{
		if (tortoise == hare)
			return (tortoise);
		tortoise = tortoise->next;
		hare = hare->next;

	}
	return (NULL);
}

/**
 * print_listint_safe - list elements only once if there is a loop
 * @head: head of the list
 * Return: number of elements
 */
size_t print_listint_safe(const listint_t *head)
{
	bool met = false;
	listint_t *tortoise, *hare, *ptr;
	int i, j, m;

	tortoise = (void *)head;
	hare = (void *)head;
	ptr = NULL;
	i = m = j = 0;
	for (i = 0; hare && tortoise; i++)
	{
		hare = hare->next;
		tortoise = (tortoise->next)->next;
		if (hare == tortoise)
		{
			met = true;
			tortoise = (void *)head;
			break;
		}

	}
	if (met)
		ptr = find_ptr(tortoise, hare);
	while (head)
	{
		if (met)
		{
			if (head->n == ptr->n)
				m++;
		}
		if (m > 1)
			break;
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		j++;
	}
	if (met)
		printf("-> [%p] %d\n", (void *)ptr, ptr->n);
	return (j);
}
