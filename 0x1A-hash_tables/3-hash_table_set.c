#include "hash_tables.h"
#include <stdio.h>

/**
 * replace_value - replaces a value at an already existing key
 * @ht: double pointer to the hash_node_t list
 * @key: key to add in the node
 * @value: value to add in the node
 */
void replace_value(hash_node_t **ht, const char *key, const char *value)
{
	hash_node_t *temp = *ht;

	while (temp && strcmp(temp->key, key))
		temp = temp->next;

	free(temp->value);
	temp->value = strdup(value);

}

/**
 * check_key - checks if a key already exists in a hash table
 * @ht: pointer to the hash_node_tm list
 * @key: key to check
 *
 * Return: 1 if key is found, 0 else
 */
int check_key(hash_node_t *ht, const char *key)
{
	while (ht)
	{
		if (!strcmp(ht->key, key))
			return (1);
		ht = ht->next;
	}

	return (0);
}

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: is a double pointer to the hash_node_t list
 * @key: new key to add in the node
 * @value: value to add in the node
 *
 * Return: address of the new element, or NULL if it fails
 */
hash_node_t *add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *new;

	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (NULL);
	new->key = strdup(key);
	new->value = strdup(value);

	if (*head == NULL)
	{
		(*head) = new;
		new->next = NULL;
	} else
	{
		new->next = (*head);
		(*head = new);
	}

	return (*head);
}

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to add the element to
 * @key:key of the element which also gives the index in the array
 * @value: value of element to store in the array
 *
 * Return: 1 if it succeeds, 0 else
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int hash;

	if (!ht || !strcmp(key, "") || !value)
		return (0);

	hash = key_index((unsigned char *)key, ht->size);
	if (check_key(ht->array[hash], key))
	{
		replace_value(&ht->array[hash], key, value);
		return (1);
	}

	add_node(&ht->array[hash], key, value);
	if (&ht->array[hash] == NULL)
		return (0);

	return (1);

}
