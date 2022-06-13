#include "main.h"

/**
 * _strlen - function that returns the length of a string.
 * @s: string to evaluate
 *
 * Return: 0 on success
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		_putchar(i);
		i++;
	}

	return (i);
}
