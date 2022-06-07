#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints putchar
 * Return: 0 on success
 */

int main(void)
{
	int i;
	char p[] = "_putchar";

	for (i = 0; i < 8; i++)
		_putchar(p[i]);
	_putchar('\n');

	return (0);
}
