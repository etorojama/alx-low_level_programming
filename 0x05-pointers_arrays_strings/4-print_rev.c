#include "main.h"

/**
 * print_rev - function that prints a string, in reverse
 * @s: string to reverse
 *
 * Return: void
 */

void print_rev(char *s)
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
		_putchar(s[j]);
	}

	_putchar('\n');
}
