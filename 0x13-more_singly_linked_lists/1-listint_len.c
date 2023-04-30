#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - prints number of elem in a listint list.
 * @h: the lists head.
 *
 * Return: returns the number of elem in the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num)
}
