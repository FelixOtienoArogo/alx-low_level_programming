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
hash_table_t *new;
unsigned long int i;
new = malloc(sizeof(hash_table_t));

if (new == NULL)
{
fprintf(stderr, "Error: malloc failed\n");
return (NULL);
}
new->size = size;
new->array = malloc(sizeof(hash_node_t *) * size);
if (new->array == NULL)
{
fprintf(stderr, "Error: malloc failed\n");
return (NULL);
}
for (i = 0; i < size; i++)
{
new->array[i] = NULL;
}
return (new);
}

