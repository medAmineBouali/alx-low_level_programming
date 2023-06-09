#include "lists.h"
/**
 * pop_listint - deletes head of a listint_t list
 * @head: the lists head.
 *.
 * Return: returns nothing.
*/
int pop_listint(listint_t **head)
{
	int b;
	listint_t *tmp;

	if (!*head || !head)
		return (0);
	b = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;
	return (b);
}
