#include "hash_tables.h"

/**
 * key_index - index for key pair is stored
 * @key: key to the index
 * @size: array size
 * Return: key index
 * Description: use djb2 algorithm
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
