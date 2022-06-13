#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string to reverse
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	j = i - 1;
	for (; j >= 0; j--)
	{
		s[j];
	}

	_putchar('\n');
}
