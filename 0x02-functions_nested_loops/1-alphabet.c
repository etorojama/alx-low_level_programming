#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints alphabets
 *
 * Description: prints alphabets in lower case
 * Return: void
 */

void print_alphabet(void)
{
	int i;

	i = 'a';
	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	putchar('\n');
}
