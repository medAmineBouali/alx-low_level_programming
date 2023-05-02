#include "lists.h"
/**
 * free_listint2 - frees a listint_t list
 * @head: the lists head.
 *.
 * Return: returns nothing.
*/
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (*head == NULL)
		return;
	while (*head)
	{
		current = (*head)->next;
		*head = NULL;
		*head = current;
	}
	*head = NULL;
}
