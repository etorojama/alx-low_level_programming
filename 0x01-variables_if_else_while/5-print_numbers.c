#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Description: prints all single digit numbers of base 10 starting from 0
 * Return: 0 on success
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	putchar('\n');
	return (0);
}
