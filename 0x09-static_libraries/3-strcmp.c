#include "main.h"

/**
 * _strcmp - function that compares two strings.
 * @s1: string bto compare
 * @s2: another string
 *
 * Return: 0 on success
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;

	return (s1[i] - s2[i]);
}
