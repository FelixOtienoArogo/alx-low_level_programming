#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 *hash_table_set - sets a hash table
 *
 *@ht: the hash table to add or update the key/value to
 *@key: is the key and cannot be empty
 *@value: is the value associated with the key, can be empty
 *
 *Return: 1 on success or 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index;
hash_node_t *node;

if (key == NULL)
return (0);

index = key_index((unsigned char *)key, ht->size);
node = ht->array[index];

if (node == NULL)
{
node = set_pair(key, value);
node->next = NULL;
ht->array[index] = node;

return (1);
}
while (node != NULL)
{
if (strcmp(node->key, key) == 0)
{
if (strcmp(node->value, value) == 0)
return (1);
free(node->value);
node->value = malloc(strlen(value) + 1);
if (node->value == NULL)
return (0);
strcpy(node->value, value);
return (1);
}
node = node->next;
}
if (node == NULL)
{
node = set_pair(key, value);
node->next = ht->array[index];
ht->array[index] = node;
return (1);
}
return (0);
}

/**
 * set_pair - mallocs a key/value pair to the hash table.
 * @key: the key, a string that cannot be empty.
 * @value: the value associated with the key, can be an empty string.
 *
 * Return: pointer to the new node.
 */
hash_node_t *set_pair(const char *key, const char *value)
{
hash_node_t *node;
node = malloc(sizeof(hash_node_t));

if (node == NULL)
return (0);

node->key = malloc(strlen(key) + 1);
if (node->key == NULL)
return (0);
node->value = malloc(strlen(value) + 1);
if (node->value == NULL)
return (0);
strcpy(node->key, key);
strcpy(node->value, value);

return (node);
}
