#include <stdio.h>
#include "lists.h"
/**
* list_len - gives number of eleme in a list.
* de
* @h: pointer to the head of the list.
* Return: the number of nodes in the list.
*/
size_t list_len(const list_t *h)
{
	size_t n_elem = 0;

	while (h)
	{
		n_elem++;
		h = h->next;
	}
	return (n_elem);
}
