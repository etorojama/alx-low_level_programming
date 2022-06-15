#include "main.h"

/**
 * _strncpy - function that copies a string.
 * @dest: string to copy
 * @src: another string
 * @n: number of bytes
 *
 * Return: 0 on success
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
