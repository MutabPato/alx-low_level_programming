#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * shash_table_create - creates a hash table
 * @size: size of the table
 * Return: a pointer to the newly created hash table else NULL.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
        unsigned long int i;
        shash_table_t *table;

        table = (shash_table_t *)malloc(sizeof(shash_table_t));

        if (table == NULL)
                return (NULL);

        table->size = size;
        table->array = (shash_node_t **)calloc(table->size, sizeof(shash_node_t *));

        for (i = 0; i < table->size; i++)
                table->array[i] = NULL;

        return (table);
}

/**
 * shash_table_set - adds an element to the hash table
 * @ht: hash table you want to add or update the key/value to
 * @key: the key
 * @value: value asociated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
        unsigned long int index;
        shash_node_t *new_node, *current;

        if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
                return (0);

        index = key_index((const unsigned char *)key, ht->size);
        current = ht->array[index];
        while (current != NULL)
        {
                if (strcmp(current->key, key) == 0)
                {
                        /* Key already exists, update the value and return suces */
                        free(current->value);
                        current->value = strdup(value);
                        if (current->value == NULL)
                                return (0);
                        return (1);
                }
                current = current->next;
        }
        /* Allocate memory for the new node */
        new_node = malloc(sizeof(shash_node_t));
        if (new_node ==  NULL)
                return (0);

        /* Duplicate key and value */
        new_node->key = strdup(key);
        new_node->value = strdup(value);
        if (new_node->key == NULL || new_node->value == NULL)
        {
                free(new_node->key);
                free(new_node->value);
                free(new_node);
                return (0);
        }
        /* Add the new node at the beginning of the list */
        new_node->next = ht->array[index];
        ht->array[index] = new_node;
        return (1);
}

/**
 * shash_table_get - retrieves a value asociated with a key
 * @ht: hash table to lok into
 * @key: the key you are looking for
 * Return: value, or NULL if key couldn’t be found.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
        unsigned long int index;
        shash_node_t *current;

        if (ht == NULL || key == NULL || *key == '\0')
                return (NULL);

        index = key_index((const unsigned char *)key, ht->size);
        current = ht->array[index];

        while (current != NULL)
        {
                if (strcmp(current->key, key) == 0)
                        return (current->value);
                current = current->next;
        }
        return (NULL);
}

/**
 * shash_table_print - prints a hash table
 * @ht: the hash table
 * Return: nothing
 */

void shash_table_print(const shash_table_t *ht)
{
        unsigned long int i;
        shash_node_t *current;
        int flag = 0;

        if (ht  == NULL)
                return;

        printf("{");

        for (i = 0; i < ht->size; i++)
        {
                current = ht->array[i];

                while (current != NULL)
                {
                        if (flag)
                                printf(", ");

                        printf("'%s': '%s'", current->key, current->value);
                        flag = 1;

                        current = current->next;
                }
        }
        printf("}\n");
}

/**
 * shash_table_print_rev - prints a hash table in reverse
 * @ht: the hash table
 * Return: nothing
 */

void shash_table_print_rev(const shash_table_t *ht)
{
        unsigned long int i;
        shash_node_t *current;
        int flag = 0;

        if (ht  == NULL)
                return;

        printf("{");

        for (i = 0; i < ht->size; i++)
        {
                current = ht->array[i];

                while (current != NULL)
                {
                        if (flag)
                                printf(", ");

                        printf("'%s': '%s'", current->key, current->value);
                        flag = 1;

                        current = current->next;
                }
        }
        printf("}\n");
}

/**
 * shash_table_delete - deletes a hash table
 * @ht: the hash table
 * Return: nothing
 */

void shash_table_delete(shash_table_t *ht)
{
        unsigned long int i;
        shash_node_t *current;

        for (i = 0; i < ht->size; i++)
        {
                current = ht->array[i];

                while (current != NULL)
                {
                        free(current->key);
                        free(current->value);
                        free(current);
                        current = current->next;
                }
        }
        free(ht->array);
        free(ht);
}
