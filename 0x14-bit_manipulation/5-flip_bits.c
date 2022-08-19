#include <stdio.h>
#include "main.h"

/**
 *flip_bits - number of bits to be flipped
 *
 *@n: the value
 *@m: the second
 *
 *Return: the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int i;
unsigned int j;
j = 0;

i = n ^ m;
while (i)
{
if ((i & 1) == 1)
j++;
i >>= 1;
}
return (j);
}
