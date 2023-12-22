#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array of the hash table
 * Return: Pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash;

	if (size == 0)
		return (NULL);

	hash = malloc(sizeof(hash_table_t));
	if (!hash)
		return (NULL);

	hash->size = size;
	hash->array = calloc((size_t)hash->size, sizeof(hash_node_t *));
	if (hash->array == NULL)
		return (NULL);

	return (hash);
}
