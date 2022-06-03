#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Description: prints alphabet
 * Return: 0 on success
 */

int main(void)
{
	int n = 'a';

	while (n <= 'z')
	{
		printf("%c", n);
		n++;
	}

	putchar('\n');
	return (0);
}
