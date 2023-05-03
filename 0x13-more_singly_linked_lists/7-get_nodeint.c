#include "lists.h"
/**
 * get_nodeint_at_index - deletes head of a listint_t list
 * @head: the lists head.
 * @index: index.
 * Return: returns node at index.
*/
istint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
{
	int b = (*head)->n;
	listint_t *tmp = (*head)->next;

	if (!*head)
		return (0);
	free(*head);
	*head = tmp;
	return (b);
}
