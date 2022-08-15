#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *reverse_listint - reverses a list
 *
 *@head: the head of the list
 *
 *Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *cur, *prev;

cur = *head;
prev = NULL;
while(cur != NULL)
{
*head = cur->next;
cur->next = prev;
prev = cur;
cur = *head;
}
*head = prev;

return(*head);
}
