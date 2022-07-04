#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog struct
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: a struct called dog with three members
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
void print_dog(struct dog *d);

#endif