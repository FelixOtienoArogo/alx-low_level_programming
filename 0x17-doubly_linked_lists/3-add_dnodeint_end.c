#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *add_dnodeint_end- adds a new node at the beginning of a list
 *
 *@head: the head of the list
 *@n: the element
 *
 *Return: the address of the new element or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new, *hold;
int temp = n;
hold = *head;
new = malloc(sizeof(dlistint_t));
if (new == NULL)
{
free(new);
return (NULL);
}
new->n = temp;
new->next = NULL;

if (*head == NULL)
{
new->prev = NULL;
*head = new;
}
else
{
while (hold->next != NULL)
{
hold = hold->next;
}
hold->next = new;
new->prev = hold;
}
return (*head);
}
