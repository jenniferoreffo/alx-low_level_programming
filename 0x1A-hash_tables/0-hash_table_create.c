#include "hash_tables.h"

/**
 * hash_table_create - A function to create a hash table
 * @size: The size of the array
 * Return: A pointer to the new hash table, Else NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table_created;
	unsigned int i;

/* We allocate space for our hash table using malloc */
	hash_table_created = malloc(sizeof(hash_table_t));
/* We check if the space was allocated to hash table, if it fails */
	if (hash_table_created == NULL)
		return (NULL);
/* if it succeeds */
	hash_table_created->size = size;
	hash_table_created->array = malloc(sizeof(hash_node_t *) * size);
	/* check for malloc allocation for array */
	if (hash_table_created->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		hash_table_created->array[i] = NULL;
	return (hash_table_created);
}
