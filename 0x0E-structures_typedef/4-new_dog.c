#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - creates a new dog.
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 *
 * Return: 0 on success
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t dog my_dog;

	my_dog = malloc(sizeof(dog_t dog));
	if (my_dog == NULL)
		return (NULL);
	my_dog->name = name;
	my_dog->age = age;
	my_dog->owner = owner;
	return (my_dog);
}
	
