#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 *print_binary - function to print binary rep of a number
 *
 *@n: the number
 *
 *Return: nothing
 *
 */
void print_binary(unsigned long int n)
{
unsigned long int i, j, c, k;
i = 0;
j = n;
c = 0;
while (j)
{
if ((j & 1) == 1)
{
i |= 1;
}
if ((j & 1) != 1)
{
i |= 0;
}
j >>= 1;
c++;
if (j != 0)
i <<= 1;
}
if (i == 0)
putchar('0');
k = i;
while (i)
{
if ((i & 1) == 1)
putchar('1');
if ((i & 1) == 0)
putchar('0');
i >>= 1;
}
if (k == 1 && n > 1)
{
while (c > 1)
{
putchar('0');
--c;
}}}
