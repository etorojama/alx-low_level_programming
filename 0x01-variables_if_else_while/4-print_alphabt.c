#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Description: Print all the letters except q and e
 * Return: 0 on success
 */

int main(void)
{
	int i = 'a';

	while (i <= 'z')
	{
		if (i != 'e' && i != 'q')
		{
			putchar(i);
		}
		i++;
	}
	putchar('\n');
	return (0);
}
