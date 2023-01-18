#include <stdlib.h>
#include <string.h>
#include "3-calc.h"
#include <stdio.h>
/**
 * get_op_func - get pointer to the function to operate with
 * @s: operant character
 * Return: return pointer to afunction if
 * sucessfull or null if it fails
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}};
	while (i < 5)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);

		i++;
	}
	return (ops[i].f);
}

