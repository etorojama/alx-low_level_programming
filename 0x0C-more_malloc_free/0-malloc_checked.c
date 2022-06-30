#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: amount of bytes
 *
 * Return: 0 on success
 */

void *malloc_checked(unsigned int b)
{
	int *a;

	a = malloc(b);

	if (a == NULL)
	{
		exit(98);
	}
	
	return (a);
