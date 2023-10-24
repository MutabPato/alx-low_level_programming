#include "lists.h"

/**
 * free_listint - adds a new node at the beginning of a list
 * @head: singly linked list
 * Return: nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp  = head->next;
		free(head);
		head = temp;
	}
}
