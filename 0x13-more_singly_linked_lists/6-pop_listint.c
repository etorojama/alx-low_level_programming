#include "lists.h"

/**
 * pop_listint - Delete the head node of a list.
 * @head: A pointer
 *
 * return: 0 on success
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (!(*head))
		return (0);

	temp = *head;
	data = temp->n;
	temp = temp->next;

	free(*head);

	*head = temp;
	return (data);
}
