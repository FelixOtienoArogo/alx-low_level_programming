#include "main.h"

/**
 *print_number - Entry point
 *@n: First member
 *
 *Return: Always 0 (Success)
 */

void print_number(int n)
{
int i, j, k, l, m, o, p, q, r;

if (n < 0)
{
_putchar ('-');
n = 0 - n;
}

i = n % 10;
j = (n / 10) % 10;
k = (n / 100) % 10;
l = (n / 1000) % 10;
m = (n / 10000) % 10;
o = (n / 100000) % 10;
p = (n / 1000000) % 10;
q = (n / 10000000) % 10;
r = (n / 100000000) % 10;

if (n >= 100000000)
_putchar (r + '0');
if (n >= 10000000)
_putchar (q + '0');
if (n >= 1000000)
_putchar (p + '0');
if (n >= 100000)
_putchar (o + '0');
if (n >= 10000)
_putchar (m + '0');
if (n >= 1000)
_putchar (l + '0');
if (n >= 100)
_putchar (k + '0');
if (n >= 10)
_putchar (j + '0');
_putchar (i + '0');
}
