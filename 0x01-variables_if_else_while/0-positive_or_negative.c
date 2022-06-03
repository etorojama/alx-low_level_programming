#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <limits.h>

/**
 * main - whether the number stored in the variable n is positive or negative
 * variable n will store a different value every time you will run this program
 *
 * Return - 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);

	return (0);
}
