#include "hash_tables.h"

/**
 * hash_table_set - a function to insert data into an existing
 * hash table to store data
 * @ht: the table to insert data
 * @key: key to used to calculate the index to store data in the table
 * @value: the value to store in the hash table
 *
 * Return: returns 1 for success or 0 for error.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *data;
	char *value_copy;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_copy;
			return (1);
		}
	}
	data = malloc(sizeof(hash_node_t));
	if (data == NULL)
	{
		free(value_copy);
		return (0);
	}
	data->key = strdup(key);
	if (data->key == NULL)
	{
		free(data);
		return (0);
		data->value = value_copy;
		data->next = ht->array[index];
		ht->array[index] = data;

		return (1);
	}
}
