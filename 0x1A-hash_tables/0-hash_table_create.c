#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 * Return: A pointer to the newly created hash table,
 *      or NULL if an error occurs.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_tables;

	if (size == 0)
		return (NULL);

	hash_tables = malloc(sizeof(hash_table_t));
	if (!hash_tables)
		return (NULL);

	hash_tables->size = size;
	hash_tables->array = calloc((size_t)hash_tables->size, sizeof(hash_node_t *));
	if (hash_tables->array == NULL)
		return (NULL);
	return (hash_tables);
}
