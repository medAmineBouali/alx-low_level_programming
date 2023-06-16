#include "lists.h"
/**
 * dlistint_len - returns the number of elements in
 * a double linked list
 * @head: head of the list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *head)
{
	int count;

	count = 0;
	if (head == NULL)
		return (count);

	while (head->prev != NULL)
		head = head->prev;

	while (head != NULL)
	{
		count++;
		head = head->next;
	}

	return (count);
}