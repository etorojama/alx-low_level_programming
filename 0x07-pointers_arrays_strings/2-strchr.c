#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: pointer to string.
 * @c: character to be found.
 *
 * Return: 0 on success
 */

char *_strchr(char *s, char c)
{
	char *p;
	int counter;

	for (counter = 0; s[counter] != '\0'; counter++)
	{
		if (s[counter] == c)
		{
			p = &s[counter];
			break;
		}
	}
	if (s[counter] == c)
		p = &s[counter];
	return (p);
}
