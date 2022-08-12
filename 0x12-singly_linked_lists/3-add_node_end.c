#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *add_node_end - a function to add a new node to the end of a list
 *
 *@head: the head of the list
 *@str: the list
 *
 *Return: address of the new elelment
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new, *lis;
const char *temp;
temp = strdup(str);
new = malloc(sizeof(list_t));

if (new == NULL)
return (NULL);

new->str = (char *)temp;
new->len = strlen(temp);
new->next = NULL;

lis = *head;
if (*head == NULL)
*head = new;
else
{
while (lis->next != NULL)
{
lis = lis->next;
}
lis->next = new;
}
return (*head);
}
