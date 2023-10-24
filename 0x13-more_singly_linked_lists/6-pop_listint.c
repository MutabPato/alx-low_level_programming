#include "lists.h"

/**
 * pop_listint -  deletes the head node of a list
 * @head: head node to delete
 * Return: nothing.
 */
int pop_listint(listint_t **head)
{
	int key;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;
	key = temp->n;
	*head = (*head)->next;
	free(temp);
	return (key);
}
