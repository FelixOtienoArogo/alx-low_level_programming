#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *print_listint_safe - a function that prints all the elements of a list
 *
 *@head: the list to be printed
 *
 *Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
size_t i;
i = 0;
while (head != NULL)
{
printf("[%p] %d\n",(void *)&(head->n), head->n);
i++;
head = head->next;
}
return (i);
}
