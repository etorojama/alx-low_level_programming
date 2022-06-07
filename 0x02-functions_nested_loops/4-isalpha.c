#include "main.h"

/**
 * _isalpha - prints alphabets
 *
 * @c: character in ascii code
 *
 * Return: 0 on success
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
