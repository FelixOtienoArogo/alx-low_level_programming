#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 *print_list - to print the singly linked list
 *
 *@h: the list to be printed
 *
 *Return: the size of the list
 */
size_t print_list(const list_t *h)
{
const list_t *temp;
size_t i;

i = 0;
temp = h;
while (temp != NULL)
{
if (temp->str == NULL)
{
printf("[0] (nil)\n");
}
if (temp->str != NULL)
printf("[%d] %s\n", temp->len, temp->str);

temp = temp->next;
i++;
}
return (i);
}
