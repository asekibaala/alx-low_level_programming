#ifndef _LISTS_
#define _LISTS_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @forward: points to the next node
 *
 * Description: singly linked list node structure
 * for ALX project
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *forward;
} list_t;

size_t print_list(const list_t *h);

#endif