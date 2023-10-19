#include "lists.h"

/**
 * add_node_end -  adds a new node at the end
 * @head: first
 * @str: string
 * Return:  number of elements.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *add_node_end = malloc(sizeof(list_t));

	if (!add_node_end)
		return (NULL);

	add_node_end->str = strdup(str);
	add_node_end->next = NULL;

	if (*head == NULL)
		*head = add_node_end;
	else
	{
		list_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = add_node_end;
	}
	add_node_end->len = strlen(str);
	return (add_node_end);
}
