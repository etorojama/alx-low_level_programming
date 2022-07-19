#include "lists.h"

/**
 * print_listint - Prints all the elements of a list.
 * @h: pointer to the head of the list.
 *
 * Return: 0 on success
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}

	return (i);
}
