#include "hash_tables.h"
#include <string.h>

/**
 * key_index -gives the index of the key
 * @key: the key (string)
 * @size: the size of the array
 *
 * Return: 0 on success
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
