#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 *set_bit - sets the value of a bit to 1 at a given index
 *
 *@n: the array
 *@index: the index
 *
 *Return: 1 if works -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned int i, j;
j = 1;

for (i = 0; i < index; i++)
{
j <<= 1;
}
*n |= j;
return (1);
}
