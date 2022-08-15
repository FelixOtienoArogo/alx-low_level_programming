#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *add_nodeint - a function that adds a new node at the beginning of a list
 *
 *@head: the head of the list
 *@n: the node to be added
 *
 *Return: the address of the new element or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;
new = malloc(sizeof(listint_t));
if (new == NULL)
{
free(new);
return (NULL);
}
new->n = n;
new->next = NULL;
if (head == NULL)
{
*head = new;
}
else
{
new->next = *head;
*head = new;
}
return (new);
}
