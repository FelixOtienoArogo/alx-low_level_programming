#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *get_dnodeint_at_index- returns the nth node of a linked list
 *
 *@head: the head of the list
 *@index: the index of the node
 *
 *Return:the nth node of a linked list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i;
dlistint_t *temp;

i = 0;
temp = head;

while ((temp->next != NULL) && (i < index))
{
temp = temp->next;
i++;
}
if (i <= index)
return (temp);
else
return (NULL);
}
