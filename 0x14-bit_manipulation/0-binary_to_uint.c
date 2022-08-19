#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 *binary_to_uint - function that converts a binary number to an int
 *
 *@b: the binary number
 *
 *Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int j, k, l;
int i, m;
j = 0;
k = 1;
m = 0;
if (b)
{
for (i = (strlen(b) - 1); i > -1; i--)
{
if (b[i] == '1')
{
l = m;
while (l != 0)
{
k = k * 2;
--l;
}
j += k;
k = 1;
}
else if (b[i] != '0')
return (0);
m++;
}
}
return (j);
}
