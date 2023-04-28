#include <stdio.h>
#include "lists.h"
/**
* print_list - prints elements of a list.
*
* @h: pointer to the head of the list.
* Return: the number of nodes in the list.
*/
size_t print_list(const list_t *h)
{
	size_t number_of_nodes = 0;

	while (h)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
			printf("[0] (nil)\n");
		number_of_nodes++;
		h = h->next;
	}
	return (number_of_nodes);
}
