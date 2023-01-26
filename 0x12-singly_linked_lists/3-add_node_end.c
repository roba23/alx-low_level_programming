#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node_end - add item to the end of a node
 * @head: pointer to the last element in the node
 * @str: data to be copied to the new element(NOde)
 * Return: pointer to the last element(Node)
 */
list_t *add_node_end(list_t **head, char *str)
{
	list_t *m;

	m = malloc(sizeof(list_t));
