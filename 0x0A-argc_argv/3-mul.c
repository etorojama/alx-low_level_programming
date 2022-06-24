#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point
 * @argc: chount variable
 * @argv: pointer to string array
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int count, product = 1;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (count = 1; count < argc; count++)
			product *= atoi(argv[count]);
		printf("%d\n", product);
	}
	return (0);
}
