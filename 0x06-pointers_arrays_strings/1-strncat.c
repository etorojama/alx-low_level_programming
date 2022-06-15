#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 * @dest: string to concatenate
 * @src: another string
 * @n: bytes
 *
 * Return: 0 on success
 */

char *_strncat(char *dest, char *src, int n)
{
	int x;

	x = 0;
	while (*dest != '\0')
	{
		dest++;
		x++;
	}

	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[x + i] = src[i];
	}
	dest[x + i] = '\0';

	return (dest);
}
