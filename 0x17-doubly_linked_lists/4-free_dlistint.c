#include "lists.h"

/**
 * free_dlistint - adds a new node at the end of a dlistint_t list
 * @head: head node
 * Return: nothing.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
