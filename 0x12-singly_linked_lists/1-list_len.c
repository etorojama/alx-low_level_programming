#include "lists.h"

/**
 * list_len - give the number of elements in a list.
 * @h: pointer to list.
 *
 * Return: 0 on success
 */

size_t list_len(const list_t *h)
{
	int count;

	count = 0;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
