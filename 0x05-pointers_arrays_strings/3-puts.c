#include "main.h"

/**
 * _puts - function that prints a string
 * @str: string to print
 *
 * Return: void
 */

void _puts(char *str)
{
	int i;

	i = 0;
	while (*str != '\0')
	{
		_putchar(str);
		i++;
	}

	_putchar('\n');
}
