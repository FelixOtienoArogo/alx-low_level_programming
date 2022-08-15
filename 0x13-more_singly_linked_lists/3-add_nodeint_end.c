#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *add_nodeint_end - a function that adds a new node at the end of a list
 *
 *@head: the head of the list
 *@n: the new node
 *
 *Return: address of the new element of NULL if it failed
 *
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new, *temp;
new = malloc(sizeof(listint_t));
if (new == NULL)
{
free(new);
return (NULL);
}
new->n = n;
new->next = NULL;

temp = *head;
if(*head == NULL)
{
*head = new;
}
else
{
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = new;
}
return (*head);
}
