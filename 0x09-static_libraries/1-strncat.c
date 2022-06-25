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
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < n && src[j] != '\0'; j++, i++)
		dest[i] = src[j];
	dest[i] = '\0';

	return (dest);
}
