#include "main.h"
/**
 *print_times_table - Entry point
 *@n : First member
 *
 *Return: Always 0 (Success)
 */

void print_times_table(int n)
{
long int i, j, a;
a = n * n;
if (a > 0)
{
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
long int m;
m = i * j;
if (m < 10)
{
if (j != 0)
{
_putchar(' ');
_putchar(' ');
}
_putchar (m + '0');
if (j < n)
{
_putchar(',');
_putchar(' ');
}
}
else
{
long int k, l , g;
k = m % 10;
l = (m / 10) % 10;
g = (m / 100) % 10;

if (m > 99)
{
_putchar (g + '0');
}
else
{
  _putchar (' ');
}
_putchar (l + '0');
_putchar (k + '0');
if (j < n)
{
_putchar (',');
_putchar (' ');
}
}
}
_putchar('\n');
}
}
}
