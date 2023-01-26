#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * add_node - add an element to the start of the singly linked list
 * @head: the adress of the head of the node
 * @str: the string to be held in the  node
 * Return:pointer to the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *m;

	m = malloc(sizeof(list_t));
	m->next = *head;
	m->len = strlen(str);
	m->str = strdup(str);
	*head = m;
	return (m);
}
