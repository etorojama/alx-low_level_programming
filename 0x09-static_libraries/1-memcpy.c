#include "main.h"

/**
 * _memcpy - function that copies memory area.
 * @dest: pointer to destination.
 * @src: pointer to source string.
 * @n: number of bytes to be copied.
 *
 * Return: 0 on success
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int counter;

	for (counter = 0; counter < n; counter++)
		dest[counter] = src[counter];
	return (dest);
}
