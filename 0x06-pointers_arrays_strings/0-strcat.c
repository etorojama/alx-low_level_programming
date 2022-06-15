#include "main.h"

/**
 * *_strcat - function that concatenates two strings.
 * @*dest: string to concatetate
 * @*src: another string
 *
 * Return: 0 on success
 */

char *_strcat(char *dest, char *src)
{
	int n;

	n = 0;
	while (*dest != '\0')
	{
		dest++;
		n++;
	}

	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[n + i] = src[i];
	dest[n + i] = '\0';

	return (dest);
}
