#include "lists.h"
/**
 * free_listint - frees a listint_t list
 * @head: the lists head.
 *.
 * Return: returns nothing.
*/
void free_listint(listint_t *head);
{
	listint_t *current;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
