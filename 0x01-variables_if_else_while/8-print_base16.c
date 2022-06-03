#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print base 10 numbers in lowercase
 * Return: 0 on success
 */

int main(void)
{
	int i = 0, j = 'a';

	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}
	while (j < 'g')
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
