#include "main.h"

/**
 * print_rev - function that prints a string, in reverse
 * @s: string to reverse
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		s++;
		i++;

		int j;

		for (j = i - 1; j >= 0; j--)
		{
			_putchar(s[j]);
		}
	}

	_putchar('\n');
}
