#include "lists.h"
/**
 * pop_listint - deletes head of a listint_t list
 * @head: the lists head.
 *.
 * Return: returns nothing.
*/
int pop_listint(listint_t **head)
{
	int b = (*head)->n;
	listint_t *tmp = (*head)->next;

	if (!**head || !*head || !head)
		return (0);
	free(*head);
	*head = tmp;
	return (b);
}
