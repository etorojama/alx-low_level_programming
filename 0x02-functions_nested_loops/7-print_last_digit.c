#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 *
 * @c: integer to print
 * Return: 0 on success
 */

int print_last_digit(int c)
{
	int n;

	if (c < 0)
	{
		n = (c % 10) * -1;
	}
	else
	{
		n = c % 10;
	}
	_putchar(n + '0');
	return n;
}
