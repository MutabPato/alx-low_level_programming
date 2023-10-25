#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: head node
 * @index: index of the node, starting at 0
 * Return: nothing.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		if (i == index)
		{
			return (head);
		}
		head = head->next;
		i++;
	}
	if (index > i)
		return (NULL);

	return (0);
}
