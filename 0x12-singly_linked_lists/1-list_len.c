#include "lists.h"

/**
 * list_len - prints all the elements of a list_t
 * @h: list_t
 * Return:  number of elements.
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
