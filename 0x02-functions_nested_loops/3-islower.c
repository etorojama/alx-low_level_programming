#include "main.h"

/**
 * _islower - prints lower characters
 * @c - integer to return
 *
 * Return: 0 on success
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
