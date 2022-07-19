#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning
 * @head: A pointer
 * @n: The integer for the new node
 *
 * Return: 0 on success
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = NULL;

	new = (listint_t *)malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
