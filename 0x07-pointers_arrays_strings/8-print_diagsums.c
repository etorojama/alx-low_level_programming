#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the two diagonals
 * @a: array to sum
 * @size: size of array
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, size1;
	unsigned int sumDiag1, sumDiag2;

	size1 = 0;
	sumDiag1 = 0;
	sumDiag2 = 0;

	size1 = (size * size) - 1;

	for (i = 0; i <= size1; i = i + (size + 1))
		sumDiag1 = sumDiag1 + a[i];
	for (i = (size - 1); i < size1; i = i + (size - 1))
		sumDiag2 = sumDiag2 + a[i];
	printf("%d, %d\n", sumDiag1, sumDiag2);
}