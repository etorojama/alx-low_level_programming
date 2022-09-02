#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t list.
 * @head: pointer to head of list.
 * @index: index of node;
 *
 * Return: 0 on success
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;

	temp = head;
	while (index != 0 && temp != NULL)
	{
		temp = temp->next;
		index--;
	}
	return (temp);
}
