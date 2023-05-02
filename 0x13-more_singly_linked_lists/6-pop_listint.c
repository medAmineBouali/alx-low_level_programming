#include "lists.h"
/**
 * pop_listint - deletes head of a listint_t list
 * @head: the lists head.
 *.
 * Return: returns nothing.
*/
int pop_listint(listint_t **head)
{
	const int = (*head)->n;
	listint_t = tmp;

	if (*head == NULL)
		return;
	tmp = *head->next;
	free(*head);
	*head = tmp;
}
