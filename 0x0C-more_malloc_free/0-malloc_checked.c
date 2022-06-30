#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: argument to alloctae to
 *
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	int a;

	a = malloc(sizeof(int) * b);

	if (a == NULL)
	{
		exit(98);
	}
	else
		return (a);
