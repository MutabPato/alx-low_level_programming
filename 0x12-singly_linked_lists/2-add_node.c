#include "lists.h"

/**
 * add_node -  adds a new node at the beginning
 * @head: first
 * @str: string
 * Return:  number of elements.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *add_node = malloc(sizeof(list_t));

	add_node->str = strdup(str);
	add_node->next = *head;
	*head = add_node;
	add_node->len = strlen(str);
	return (add_node);
}
