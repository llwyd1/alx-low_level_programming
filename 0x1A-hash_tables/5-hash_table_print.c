#include "hash_tables.h"
#include <stdio.h>

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	char *key;
	char *value;
	hash_node_t *head;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{

		if (ht->array[i])
		{
			key = ht->array[i]->key;
			value = ht->array[i]->value;
 			printf("'%s': '%s',",key, value);
			head = ht->array[i]->next;
			while (head)
			{
				key = head->key;
				value = head->value;
				printf("%s : %s,", key, value);
				head = head->next;
			}
	       }

	}
	printf("}\n");
}
