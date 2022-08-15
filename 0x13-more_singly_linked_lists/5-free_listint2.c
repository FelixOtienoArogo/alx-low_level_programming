#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *free_listint2 - a function to free a list
 *
 *@head: the head of the list
 *
 *Return: nothing
 */
void free_listint2(listint_t **head)
{
listint_t *cur;
if (head != NULL)
{
cur = *head;
while (cur->next != NULL)
{
free(cur);
cur = cur->next;
}
*head = NULL;
}
}
