#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *print_listint - a function that prints all the elements of a list
 *
 *@h: the list to be printed
 *
 *Return: the size of the list
 */
size_t print_listint(const listint_t *h)
{
size_t i;
i = 0;
while (h != NULL)
{
printf("%d\n", h->n);
i++;
h = h->next;
}
return (i);
}
