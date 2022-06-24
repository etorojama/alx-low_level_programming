#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: count variable
 * @argv: pointer to string array
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
		printf("%s\n", argv[count]);

	return (0);
}
