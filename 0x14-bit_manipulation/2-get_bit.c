#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number.
 * @index: index of bit.
 *
 * Return: 0 on success
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bitstatus;

	if (index > 64)
	{
		return (-1);
	}
	bitstatus = (n >> index) & 1;

	return (bitstatus);
}
