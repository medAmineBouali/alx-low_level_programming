#include "lists.h"
/**
 * get_nodeint_at_index - deletes head of a listint_t list
 * @head: the lists head.
 * @index: index.
 * Return: returns node at index.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp = head;

	while (i < index && tmp)
	{
		i++;
		tmp = head->next;
	}
	return (tmp ? tmp : NULL);
}
