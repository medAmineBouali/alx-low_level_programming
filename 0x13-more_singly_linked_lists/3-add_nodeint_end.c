#include "lists.h"

/**
 * add_nodeint - prints number of elem in a listint list.
 * @head: the lists head.
 * @n: new list elemrnt.
 * Return: returns the adress of the new list.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *last = *head; 

	if (!new)
		return (NULL);
	if (*head)
	{
		while (last->next)
		{
			last = last->next;
		}
		last->next = new;
	}	
	else
		*head = new;
	new->n = n;
	new->next = NULL;
	return (new);
}
