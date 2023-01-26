#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
/**
 * struct list_s - singly linked list
 * @str: string - malloc(malloced string)
 * @len: length of the string
 * @next: points the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h)l



#endif
