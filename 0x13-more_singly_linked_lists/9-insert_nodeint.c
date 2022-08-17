#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *insert_nodeint_at_index - inserts a new node at a given position
 *
 *@head: the head of the list
 *@idx: index of the list to add the node
 *@n: the new node
 *
 *Return: the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new, *cur;
unsigned int i;

cur = *head;
i = 0;
new = malloc(sizeof(listint_t));
if (new == NULL)
{
free(new);
return (NULL);
}

new->n = n;
new->next = NULL;

while (cur->next != NULL && i < idx)
{
cur = cur->next;
i++;
}
if (i == idx)
{
new->next = cur->next;
cur->next = new;
}
return (new);
}
