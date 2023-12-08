#include "lists.h"

/**
 * sum_dlistint - returns sum of all the data (n) of a linked list.
 * @head: head node
 * Return: return 0.
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		current = head;
		head = head->next;
		sum += current->n;
	}
	return (sum);
}
