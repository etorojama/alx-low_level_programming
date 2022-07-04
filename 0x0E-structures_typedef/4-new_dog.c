#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - Finds the length of a string.
 * @str: The string to be measured.
 *
 * Return: 0 on success
 */

int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	return (i);
}

/**
 * _strcopy - Copies a string pointed to by src
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 *
 * Return: 0 on success
 */

char *_strcopy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}



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
	dog_t *dog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (!(dog->name) || !(dog->owner))
	{
		free(dog->owner);
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = _strcopy(dog->name, name);
	dog->age = age;
	dog->owner = _strcopy(dog->owner, owner);

	return (dog);
}
