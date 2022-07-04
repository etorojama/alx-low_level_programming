#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints a struct dog
 * @d: dog to print
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name)
			printf("%s\n", d->name);
		else
			printf("Name: (nil)\n");

		if (d->age)
			printf("%.5f\n", d->age);
		else
			printf("Age: (nil)\n");

		if (d->owner)
			printf("%s\n", d->owner);
		else
			printf("Owner: (nil)\n");
	}
}
