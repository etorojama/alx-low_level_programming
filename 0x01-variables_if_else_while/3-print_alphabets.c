#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Description: print alphabets in lower and upper case
 * Return: 0 on success
 */

int main(void)
{
	int i = 'a', j = 'A';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	while (j <= 'Z')
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
