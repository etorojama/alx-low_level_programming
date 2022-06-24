#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: count variable
 * @argv: pointer to string array
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
