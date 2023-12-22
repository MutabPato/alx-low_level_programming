#include <stdio.h>
#include <stdlib.h>
#define CAPACITY 50000 /* Size of the HashTable. */

unsigned long hash_function(char *str)
{
	unsigned long i = 0;
	int j;

	for (j = 0; str[j]; j++)
		i += str[j];

	return (i % CAPACITY);
}
/* Defines the HashTable item */

typedef struct Ht_item
{
	char *key;
	char *value;
} Ht_item;

/* Defines the Hashtable */

typedef struct HashTable
{
	/* contains an array of pointers to items */
	Ht_items** items;
	int size;
	int count;
} HashTable;

Ht_item *create_item(char *key, char *value)
{
	/* Creates a pointer to a new HashTable item */
	Ht_item *item = (Ht_item*) malloc(sizeof(Ht_item));
	item->key = (char*) malloc(strlen(key) + 1);
	item->value = (char*) malloc(strlen(value) + 1);
	strcpy(item->key, key);
	strcpy(item->value, key);
	return (item);
}

HashTable *create_table(int_size)
{
	/* creates a new Hashtable */
	HashTable *table = (HashTable*) malloc(sizeof(HashTable));
	table->size = size;
	table->count = 0;
	table->items = (Ht_item**) calloc(table->size, sizeof(Ht_item*));
 	int i = 0;

	for (i = 0; i < table->size; i++)
		table->items[i] = NULL;

	return (table);
}

/* Freeing the memory we've allocated */

void free_item(Ht_item *item)
{
	/* Frees an item */
	free(item->key);
	free(item->value);
	free(item);
}

void fee_table(HashTable *table)
{
	/* Frees the table */
	int i;
	Ht_item *item;
	for (i = 0; i <table->size; i+=)
	{
		item = table->items[i];

		if (item != NULL)
			free_item(item);
	}

	free(table->items);
	free(table);
}

void print_table(HashTable *table)
{
	printf("\nHash Table\n---------------\n");
	int i;

	for (i = 0; i < table->size; i++)
	{
		if (table->item[i])
			printf("Index:%d, Key:%s, Value:%s\n", i, table->items[i] -> key, table->items[i]->value)
	}
	printf("---------------\n\n");
}
/*Handling collisions*/
void handle_collision(HashTable *table, Ht_item *item)
{
}

/* Inserting into the Hash Table */
void ht_insert(HashTable *table, char* key, char *value)
{
	/* create item */
	Ht_item *item = create_item(key, value);

	/*compute the index*/
	int index = hash_function(key);

	Ht_item *current_item = table->items[index];

	if (current_item == NULL)
	{
		/* key doesn't exist*/
		if (table->count == table->size)
		{
			/*HashTable is full*/
			printf("Insert Error: Hash Table iS full\n");
			free_item(item);
			return;
		}
		/*Insert directly*/
		table->items[index] = item;
		table->count++;
	}
	else /*{key:value} pair already exists*/
	{
		/*scenario 1: update the value*/
		if (strcmp(current_item->key, key) == 0)
		{
			strcpy(table->items[index] -> value, value);
			return;
		}
		/*scenario 2: Handle a collision*/
		else
		{
			handle_collision(table, item);
			return;
		}
	}
}
/*searching for items in the HashTable*/
char *ht_search(HashTable *table, char *key)
{
	/*Searches for key value, return NULL if not found*/
	int index = hash_function(key);
	Ht_item *item = table->items[index];
	
	/*provide only non-NULL values*/
	if (item != NULL)
	{
		if (strcmp(item->key, key) == 0)
			return (item->value);
	}
	return (NULL);

}

/*display the item that matches the key*/
void print-search(HashTable *table, char *key)
{
	char *val;

	if ((val = ht_search(table, key)) == NULL)
	{
		printf("key:%s does not exist\n", key);
		return;
	}
	else
	{
		printf("key:%s, value:%s\n", key, val);
	}
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Wrong usage\n");
		exit(EXIT_FAILURE);
	}
	printf("%ld\n", hash_function(argv[1]));
	return (0);
}
