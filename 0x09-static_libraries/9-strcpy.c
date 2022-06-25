#include "main.h"

/**
 * _strcpy - copy stringat the end of another string including \0.
 * @dest: pointer to string to be copied to.
 * @src: pointer to string to be copied
 *
 * Return: 0 on success
 */

char *_strcpy(char *dest, char *src)
{
	int c;

	for (c = 0; src[c] != '\0'; c++)
		dest[c] = src[c];
	dest[c] = '\0';
	return (dest);
}
