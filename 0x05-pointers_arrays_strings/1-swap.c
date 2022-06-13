#include "main.h"

/**
 * swap_int - function that swaps the values of two integers.
 * @a: value to swap
 * @b: another value to swap
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
