
#ifndef _LIST_H_
#define _LIST_H_

#include <stdlib.h>

/**
 * struct list_t - singly linked list
 * @str: string - (malloced string)
 * @len: lenght of the string
 * @next: points to the next node
 * Description: singly linked list node structure for Alx project
 */
typedef struct list_t
{
	char *str;
	unsigned int len;
	struct list_t *next;
} list_t;

/* prototypes */
int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
