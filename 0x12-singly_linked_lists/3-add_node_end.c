#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node_end - add item to the end of a node
 * @head: pointer to the last element in the node
 * @str: data to be copied to the new element(NOde)
 * Return: pointer to the last element(Node)
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *m, *n;

	m = malloc(sizeof(list_t));
	if (m == NULL)
		return (NULL);
	m->len = strlen(str);
	m->str = strdup(str);
	m->next = NULL;
	if (*head == NULL)
	{
		*head = m;
		return (*head);
	}
	n = *head;
	while (n->next != NULL)
		n = n->next;
	n->next = m;

	return (*head);
}

