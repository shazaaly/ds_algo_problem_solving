#include <stdio.h>
#include <string.h>
#include "hash.h"

/* allocate menory for item, item key, item value*/
H_item *create_new_item(char *key, char *value)
{
	/* create pointer to a new item*/
	item *item = (H_item*)malloc(sizeof(item));
	item->key *key = (char*)malloc(strlen(key) + 1);
	item->key *value = (char*)malloc(strlen(value) + 1);
	strcpy(table->key, key);
	strcpy(table->value, value);
	return (item);
}


HashTable *create_hash_table(int size)
{
	int i;
	/*create a new hash table*/
	HashTable *table = (HashTable*)malloc(sizeof(HashTable));
	if (table ==NULL)
	{
		return (NULL);
	}
	table->size = size;
	table->count = 0;
	table->items = (H_item*)calloc(sizeof(H_item*) * table->size);

	for (i = 0; i < table->size; i++)
	{
		/* sets all the items to NULL. */
		table->items[i] = NULL;
	}
	return (table)
}

/*============== free items and table============*/

void free_item(H_item *item)
{
	free(item->key);
	free(item->value);
	free(item);
}

void free_table(HashTable **table)
{
	int i;

	for (i = 0; i < table->size; i++)
	{
		free(table->items[i]);
	}
	free(table->items);
	free(table);
}

void print_table(HashTable *table)
{
	int i;
	H_item *item;

	for (i = 0; i < table->size; i++)
	{
		if (item != NULL)
		{
			item = table->items[i];
			printf("Key: %s\n", item[i]->key);
			printf("value: %s\n", item[i]->value);
		}

	}
}