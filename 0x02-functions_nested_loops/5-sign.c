#include "main.h"

/*
 * print_sign - Checks number for sign
 *
 * @n: integer to check
 * Return: 0 on success
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
