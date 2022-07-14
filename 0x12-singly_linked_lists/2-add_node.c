#include "lists.h"

/**
 * _strlen - finds length of a string.
 * @str: string.
 *
 * Return: 0 on success
 */

int _strlen(const char *str)
{
	int i;

	while (str[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * add_node - adds a new node at the beginning of a list_t.
 * @head: pointer to first element of the list.
 * @str: string to be duplicated.
 *
 * Return: 0 on success
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = NULL;
	size_t i = 0;

	new = malloc(sizeof(list_t));
	if (!new)
	{
		free(new);
		return (NULL);
	}

	for (i = 0; str[i]; i++)
		;

	new->str = strdup(str) ? strdup(str) : (NULL);
	new->len = i;
	new->next = *head;
	*head = new;

	return (new);
}
