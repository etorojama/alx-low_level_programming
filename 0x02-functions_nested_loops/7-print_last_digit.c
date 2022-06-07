#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 *
 * @c: integer to print
 * Return: 0 on success
 */

int print_last_digit(int c)
{
	if (c > 0)
	{
		_putchar(c % 10 + '0');
	}
	return (1);
}
