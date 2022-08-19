#include <stdio.h>
#include "main.h"

/**
 *clear_bit - sets the value of a bit to 0
 *
 *@n: the value
 *@index: the index
 *
 *Return: 1 if works or -1 if fail
 *
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned int i, j, k, l;
j = 1;
k = *n;
l = 0;
while (k)
{
k >>= 1;
l++;
}
for (i = 0; i < l; i++)
{
j |= 1;
if (i == (l - index))
j <<= 1;
j <<= 1;
}
*n &= j;
return (1);
}
