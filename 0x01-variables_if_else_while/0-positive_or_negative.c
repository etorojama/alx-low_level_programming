#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <limits.h>

/**
 * main - entry point
 * 
 * Description: number stored in the variable n is positive or negative.
 *
 * Return - 0 on success
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
