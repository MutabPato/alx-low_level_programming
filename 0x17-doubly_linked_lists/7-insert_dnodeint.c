#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head node
 * @idx: index
 * @n: data
 * Return: the address of the new node, or NULL if it failed.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current;
	unsigned int i = 0;
	dlistint_t *newNode = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	if (*h == NULL && idx != 0)
	{
		free(newNode);
		return (NULL);
	}

	if (idx == 0)
		return (add_dnodeint(h, n));

	current = *h;
	while (i < idx - 1 && current->next != NULL)
	{
		current = current->next;
		i++;
	}

	if (current == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->prev = current;
	newNode->next = current->next;
	if (current->next != NULL)
	{
		current->next->prev = newNode;
	}
	current->next = newNode;

	return (newNode);
}
