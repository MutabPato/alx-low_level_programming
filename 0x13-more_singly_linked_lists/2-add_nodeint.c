#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: singly linked list
 * @n: number elemrnts.
 * Return: nothing.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add_nodeint = (listint_t *)malloc(sizeof(int));

	add_nodeint->n = n;
	add_nodeint->next = *head;
	*head = add_nodeint;
	return (0);
}
