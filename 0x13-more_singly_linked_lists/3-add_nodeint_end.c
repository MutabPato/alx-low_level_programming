#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: singly linked list
 * @n: number elemrnts.
 * Return: nothing.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		listint_t *temp = *head;

		while (temp->next != NULL)
		{
			temp  = temp->next;
		}
		temp->next = new_node;
	}
	return (new_node);
}
