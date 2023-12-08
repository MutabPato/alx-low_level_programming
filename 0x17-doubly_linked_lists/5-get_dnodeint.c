#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: head node
 * @index: index of the node, starting from 0
 * Return: NULL if node does not exist.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i = 0;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		if (index == i)
			return (current);
		i++;
	}
	return (NULL);
}
