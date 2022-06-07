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

	n = c % 10;

	if (n < 0)
	{
		_putchar(-n + 0);
		return (-1);
	}
	else
	{
		_putchar(n + 0);
		return (1);
	}
}
