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
listint_t *cur, *temp;

cur = *head;
while(cur->next != NULL)
{
cur = cur->next;
temp = temp->next;
}
*head = cur;
return(*head);
}
