#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 *
 * @n: integers to print
 * Return: 0 on success
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		int c;

		for (c = n; c > 98; c--)
			printf("%d, ", c);
	}
	else
	{
		int c;

		for (c = n; c < 98; c++)
			printf("%d, ", c);
	}
}
