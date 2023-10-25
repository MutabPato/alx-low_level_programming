#include "lists.h"

/**
 * insert_nodeint_at_index -  inserts a new node at a given position
 * @head: head node
 * @idx: index of the node, starting at 0
 * @n: node to be inserted
 * Return: nothing.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *current = *head;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	while (current != NULL && count < idx - 1)
	{
		current = current->next;
		count++;
	}
	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
