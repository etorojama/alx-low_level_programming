#include "main.h"

/**
 * _isdigit - checks digit
 * @c: int to check
 *
 * Return: 0 on success
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
