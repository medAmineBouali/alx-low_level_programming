#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <stdlib.h>
/**
* struct list_s - singly linked list
* @str: string - (malloc'ed string)
* @len: length of the string
* @next: points to the next node
*
* Description: singly linked list node structure
*/

typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t listint_len(const listint_t *h);
size_t print_listint(const listint_t *h);
int _putchar(char c);
#endif
