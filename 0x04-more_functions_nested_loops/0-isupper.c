#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for upper case letters
 * @c: integer to check
 *
 * Return: 0 on success
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
