#include "main.h"
/**
 *times_table - Entry point
 *
 *Return: Always 0 (Success)
 */

void times_table(void)
{
long int i, j;

for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
long int m;
m = i * j;
if (m < 10)
{
if ( j != 0)
{
_putchar(' ');
}
_putchar (m + '0');
if (j <= 8)
{
_putchar(',');
_putchar(' ');
}
}
else
{
long int k, l;
k = m % 10;
l = (m / 10) % 10;
_putchar (l + '0');
_putchar (k + '0');
if (j <= 8)
{
_putchar (',');
_putchar (' ');
}
}
}
_putchar('\n');
}
}
