#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *add_dnodeint- adds a new node at the beginning of a list
 *
 *@head: the head of the list
 *@n: the element
 *
 *Return: the address of the new element or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new;
int temp = n;
new = malloc(sizeof(dlistint_t));
if (new == NULL)
{
free(new);
return (NULL);
}
new->n = temp;
new->next = *head;
new->prev = NULL;
if ((*head) != NULL)
(*head)->prev = new;
*head = new;

return (new);
}
