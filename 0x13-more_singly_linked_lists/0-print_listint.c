#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - prints every element of a listint list.
 * @h: the lists head.
 *
 * Return: returns the number of nodes in the list/
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
