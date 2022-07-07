#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: first argument
 *
 * Return: 0 on success
 */

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);
	else
	{
		va_list ap;
		int i, sum;

		va_start(ap, n);

		sum = 0;

		for (i = 0; i < n; i++)
			sum += va_arg(ap, int);

		va_end(ap);
		return (sum);
	}
}
