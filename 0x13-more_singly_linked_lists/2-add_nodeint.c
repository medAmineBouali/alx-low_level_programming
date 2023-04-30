#include "lists.h"

/**
 * add_nodeint - prints number of elem in a listint list.
 * @head: the lists head.
 * @n: new list elemrnt.
 * Return: returns the adress of the new list.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);
	if (*head)
		new->next = *head;
	new->n = n;
	head = &new;
	return (new);
}
