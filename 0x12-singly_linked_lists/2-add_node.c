#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *add_node - a function to add a new node at the beginning of a list
 *
 *@head: the head of the list
 *@str: the list
 *
 *Return: address of the new elelment
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new;
const char *temp;
temp = strdup(str);
new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);

new->str = (char *)temp;
new->len = strlen(temp);
new->next = *head;
*head = new;

return (new);
free(new->str);
free(new);
}
