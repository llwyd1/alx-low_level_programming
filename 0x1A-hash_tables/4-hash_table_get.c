#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table to look into
 * @key: key to look for
 *
 * Return: value associated with the element, or NULL if key not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int hash;
	hash_node_t *node = NULL;

	if (!ht || !strcmp(key, "") || !key)
		return (NULL);

	hash = key_index((unsigned char *)key, ht->size);
	node = ht->array[hash];

	while (node)
	{
		if (!strcmp(node->key, key))
			return (node->value);
		node = node->next;
	}

	return (NULL);
}
