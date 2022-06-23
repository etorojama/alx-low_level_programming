#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: string to calculate
 *
 * Return: 0 on success
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	return 1 + _strlen_recursion(s + 1);
}
