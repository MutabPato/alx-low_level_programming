#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of linked list
 * @head: head node
 * @index: index
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *next_node;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		next_node = (*head)->next;
		free(*head);
		*head = next_node;

		if (*head != NULL)
			(*head)->prev = NULL;

		return (1);
	}

	current = *head;
	while (i < index && current->next != NULL)
	{
		current = current->next;
		i++;
	}

	if (current == NULL)
		return (-1);

	if (current->prev != NULL)
		current->prev->next = current->next;

	if (current->next != NULL)
		current->next->prev = current->prev;

	free(current);

	return (1);
}
