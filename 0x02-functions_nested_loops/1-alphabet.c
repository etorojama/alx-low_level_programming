#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * Description: prints alphabets in lower case
 * Return: 0 on success
 */

int main(void)
{
	int i;
	i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	putchar('\n');

	return (0);
}
