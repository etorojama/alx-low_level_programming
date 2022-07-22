#include "main.h"

/**
 * clear_bit - stes the value of a bit to one at a given index.
 * @n: pointer to number
 * @index: index of bit.
 *
 * Return: 0 on success
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = *n & ~(1 << index);
	return (1);
}
