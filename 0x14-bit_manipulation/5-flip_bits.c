#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * @n: first number
 * @m: second number to transform
 *
 * Return: 0 on success
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, num = 0;

	for (i = 63; i >= 0; i--)
	{
		if (((n ^ m) >> i) & 1)
			num++;
	}

	return (num);
}
