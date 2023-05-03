#include "lists.h"
/**
 * pop_listint - deletes head of a listint_t list
 * @head: the lists head.
 *.
 * Return: returns nothing.
*/
int pop_listint(listint_t **head)
{
	const int b = (*head)->n;
	listint_t *tmp;

	tmp = (*head)->next;
	free(*head);
	*head = tmp;
	return (b);
}
