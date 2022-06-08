#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 *
 * @n: integers to print
 * Return: 0 on success
 */

void print_to_98(int n)
{
	if (n == 98)
	{
		_putchar(n + '0');
	}
	else if (n < 98)
	{
		int j;

		for (j = n; j < 99; j++)
		{
			if (j == 98)
			{
				_putchar(j + '0');
			}
			else
			{
				_putchar(j + '0');
			}
		}
	}
	else if (n > 98)
	{
		int j;

		for (j = n; j > 97; j--)
		{
			if (j == 98)
			{
				_putchar(j + '0');
			}
			else
			{
				_putchar(j + '0')
			}
		}
	}
}
