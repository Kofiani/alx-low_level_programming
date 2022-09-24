#include "hash_tables.h"

/**
 * key_index - sets the index using key and size
 * @key: receives the key for an array
 * @size: sets the size of the array.
 *
 * Return: returns the index value
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
