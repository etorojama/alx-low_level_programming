#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 *
 * @c: integer to check
 *
 * Return: 0 on success
 */

int _abs(int c)
{
	if (c >= 0)
		return (c);
	else
		return (c * -1);
}
